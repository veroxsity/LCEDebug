# LCEDebug

<p align="center">
  <img src="https://img.shields.io/github/actions/workflow/status/veroxsity/LCEDebug/nightly.yml?branch=master&style=for-the-badge&label=nightly" alt="Nightly Workflow" />
  <img src="https://img.shields.io/github/license/veroxsity/LCEDebug?style=for-the-badge" alt="License" />
  <img src="https://img.shields.io/github/downloads/veroxsity/LCEDebug/nightly/total?style=for-the-badge" alt="Nightly Downloads" />
</p>

Public debug-focused Windows client fork for Minecraft Legacy Console Edition, based on [smartcmd/MinecraftConsoles](https://github.com/smartcmd/MinecraftConsoles).

The goal of this repo is simple: produce downloadable debug builds that can be launched outside Visual Studio, while keeping the source public and easy to build locally.

## What This Repo Is For

- Publish public nightly debug builds that are easy to run without a local IDE setup
- Preserve debug visibility through a dedicated console window and on-disk logs
- Provide a practical client target for `LCEServer`, `LCEBridge`, and `LCELauncher` testing

## Nightly Builds

Nightly builds are published from the `master` branch through GitHub Actions.

- Latest nightly release: https://github.com/veroxsity/LCEDebug/releases/tag/nightly
- Artifact: `LCEDebug-nightly-win-x64.zip`

The nightly package is built from the Visual Studio solution using the `Debug|Windows64` configuration and uploads the runnable output directory as a zip.

Automatic nightly builds only run when client code, world code, build files, or the workflow itself changes. Documentation-only pushes do not create a new nightly by themselves.

## Local Build

Open `MinecraftConsoles.sln` in Visual Studio 2022 and build `Debug|Windows64`, or follow the detailed steps in [COMPILE.md](COMPILE.md).

## Runtime Notes

LCEDebug is intended for debugging outside the Visual Studio debugger.

- The Windows build opens its own debug console when launched.
- Logs are also written next to the executable under `logs/latest.log`.
- On the next run, the previous `latest.log` is rotated into a timestamped archive.

If the debug client does not launch:

- Install the Visual C++ Redistributable: https://aka.ms/vs/17/release/vc_redist.x64.exe
- Install Windows Graphics Tools if they are missing

## Using With The Launcher

LCEDebug is also supported as a managed client stream in LCELauncher.

- Install the `Debug` stream in the launcher
- Select the `Debug` launch stream
- Launch normally while keeping the debug console and on-disk logs available

## When To Use `LCEDebug` Instead Of `LCEClient`

- Use `LCEDebug` when you want downloadable nightly binaries or easy runtime logging outside Visual Studio
- Use `LCEClient` when you need the main editable client fork for local source changes and regular development work

## Related Repositories

- Hub: https://github.com/veroxsity/MinecraftLCE
- Bridge: https://github.com/veroxsity/LCEBridge
- Client fork: https://github.com/veroxsity/LCEClient
- Launcher: https://github.com/veroxsity/LCELauncher
- Server: https://github.com/veroxsity/LCEServer
- Upstream base: https://github.com/smartcmd/MinecraftConsoles
