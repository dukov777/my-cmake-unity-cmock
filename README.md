# Project Name - README
This README file provides information on how to compile and test the project that uses CMake, CTest, and CMock.

## Prerequisites
CMake - CMake 3.15 or above must be installed
CTest - CTest comes bundled with CMake and should be available after installing CMake
CMock - CMock must be installed and configured in your project

If you add to existing git project
```
git submodule add https://github.com/ThrowTheSwitch/Unity.git
git submodule add https://github.com/ThrowTheSwitch/CMock.git
```

In case you add in non-git directory
```
git clone https://github.com/ThrowTheSwitch/Unity.git
git clone https://github.com/ThrowTheSwitch/CMock.git
```

### Creat build dir
```
mkdir build
```

## Compilation
To compile the project, create a build directory, navigate to it, and run the following command:

```
rm -rf build
mkdir build
cd build
cmake ..
make
```

## Testing
To run the tests, use the following command:

```
cd build\tests
ctest
```
This command will run all the test cases and generate the test reports.
