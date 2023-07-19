# example1

A minimal project. Just what you need for "Hello, World!"

## CMakeLists.txt

```txt
cmake_minimum_required(VERSION 3.20) # set the minimum version of cmake required to run this file

project(
    "0_minimal_project" # name of the project
)

add_executable(main main.c) # create an "target" executable named "main" from the source file "main.c"
```

## Run it yourself

```sh
cd 0_minimal_project
cmake -S . -B build
cd build
make
./main
```

## Example Output

```
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/jeremytubongbanua/GitHub/cmake_examples/0_minimal_project/build
[ 50%] Building C object CMakeFiles/main.dir/main.c.o
[100%] Linking C executable main
[100%] Built target main
Hello, World
```