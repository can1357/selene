@echo off

mklink /d "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\MSBuild\Microsoft\VC\v160\Platforms\x64\PlatformToolsets\Apollo" "%SeleneRoot%apollo-toolset"
mklink /d "C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\MSBuild\Microsoft\VC\v160\Platforms\x64\PlatformToolsets\Apollo" "%SeleneRoot%apollo-toolset"
mklink /d "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\MSBuild\Microsoft\VC\v170\Platforms\x64\PlatformToolsets\Apollo" "%SeleneRoot%apollo-toolset"
mklink /d "C:\Program Files\Microsoft Visual Studio\2022\Professional\MSBuild\Microsoft\VC\v170\Platforms\x64\PlatformToolsets\Apollo" "%SeleneRoot%apollo-toolset"
mklink /d "C:\Program Files\Microsoft Visual Studio\2022\Preview\MSBuild\Microsoft\VC\v170\Platforms\x64\PlatformToolsets\Apollo" "%SeleneRoot%apollo-toolset"
pause
