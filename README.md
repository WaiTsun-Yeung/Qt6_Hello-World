# Qt6 Hello World

## Description
A Hello World application to demonstrate using Qt6.5 with cmake 3.22 
in a cross-platform configuration.

*This application has only been tested on Windows 10.

## Dependencies
- CMake 3.22
- Qt6.5

## Build and Install

The following paths must be included in the shell's Path environment variable 
for CMake to build properly:

- Qt6Config.cmake
- Qt6QmlToolsConfig.cmake

```powershell
mkdir build;
cd build;
cmake ..;
cmake --build . --config Release;

cmake --install . #Run this line with administrative rights.
```

## Running

Navigate to your default installation directory (e.g., C:\Program Files),
the executable can be found installed at 
${INSTALL_DIR}/qt6_hello-world/bin/qt6_hello-world.exe