# LCEDebug

<p align="center">
  <img src="https://img.shields.io/github/actions/workflow/status/veroxsity/LCEDebug/nightly.yml?branch=master&style=for-the-badge&label=nightly" alt="Nightly Workflow" />
  <img src="https://img.shields.io/github/license/veroxsity/LCEDebug?style=for-the-badge" alt="License" />
  <img src="https://img.shields.io/github/downloads/veroxsity/LCEDebug/nightly/total?style=for-the-badge" alt="Nightly Downloads" />
</p>

Public debug-focused Windows client fork for Minecraft Legacy Console Edition, based on [smartcmd/MinecraftConsoles](https://github.com/smartcmd/MinecraftConsoles).

The goal of this repo is simple: produce downloadable debug builds that can be launched outside Visual Studio, while keeping the source public and easy to build locally.

## Nightly Builds

Nightly builds are published from the `master` branch through GitHub Actions.

- Latest nightly release: https://github.com/veroxsity/LCEDebug/releases/tag/nightly
- Artifact: `LCEDebug-nightly-win-x64.zip`

The nightly package is built from the Visual Studio solution using the `Debug|x64` configuration and uploads the runnable output directory as a zip.

## Local Build

Open `MinecraftConsoles.sln` in Visual Studio 2022 and build `Debug|x64`, or follow the detailed steps in [COMPILE.md](COMPILE.md).

## Runtime Notes

If the debug client does not launch:

- Install the Visual C++ Redistributable: https://aka.ms/vs/17/release/vc_redist.x64.exe
- Install Windows Graphics Tools if they are missing

## Related Repositories

- Hub: https://github.com/veroxsity/MinecraftLCE
- Client fork: https://github.com/veroxsity/LCEClient
- Launcher: https://github.com/veroxsity/LCELauncher
- Bridge: https://github.com/veroxsity/LCEBridge
