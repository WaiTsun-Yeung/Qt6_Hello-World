cmake_policy(SET CMP0071 NEW)
cmake_policy(SET CMP0087 NEW)

cmake_minimum_required(VERSION 3.22)
set (CMAKE_CXX_STANDARD 17)

project(qt6_hello-world)

if(MSVC)
    add_compile_options(/Zc:__cplusplus)
    add_compile_options(/permissive-)
endif(MSVC)

find_package(
    Qt6 REQUIRED
    COMPONENTS
        Core
        Quick
)

qt_policy(SET QTP0001 NEW)
qt_standard_project_setup()

add_subdirectory(apps)