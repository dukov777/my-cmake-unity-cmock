cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

# Add subdirectories
add_subdirectory(submodule1)
add_subdirectory(submodule2)

include_directories(.)

# Create the main executable
add_executable(my_executable main.cpp)

# Link the object files from the submodules to the main executable
target_link_libraries(my_executable PRIVATE submodule1_obj submodule2_obj)

# Add tests directory
add_subdirectory(tests)
