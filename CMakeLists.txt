cmake_minimum_required(VERSION 3.23)
project(C__Practice)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__Practice main.cpp)
file (GLOB files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()