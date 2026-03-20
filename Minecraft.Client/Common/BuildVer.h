#pragma once

// Fallback version macros for non-Visual-Studio and CI builds.
// The normal build path rewrites this file in prebuild.ps1.

#define VER_PRODUCTBUILD 560
#define VER_PRODUCTVERSION_STR_W L"local"
#define VER_FILEVERSION_STR_W VER_PRODUCTVERSION_STR_W
#define VER_BRANCHVERSION_STR_W L"UNKNOWN/unknown"
#define VER_NETWORK VER_PRODUCTBUILD
