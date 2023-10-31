cmake_minimum_required(VERSION 3.26)
project(LearnC__)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearnC__ code/main.cpp
        code/namespaceDeclaration.cpp
        code/typeDefDeclaration.cpp
        code/MiniBank.cpp)
