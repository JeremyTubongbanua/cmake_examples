
cmake_minimum_required(VERSION 3.19)

project(example2)

set(CMAKE_C_STANDARD 99)

add_executable(example2 src/main.c src/add.c src/multiply.c src/subtract.c src/power.c)
target_include_directories(example2 PRIVATE include)
