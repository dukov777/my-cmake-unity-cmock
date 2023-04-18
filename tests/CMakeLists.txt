cmake_minimum_required(VERSION 3.0)

project(test_my_interface)

# User-defined variables
set(UNITY_SRC ${CMAKE_SOURCE_DIR}/Unity/src/unity.c)
set(CMOCK_RUBY_SCRIPT ${CMAKE_SOURCE_DIR}/CMock/lib/cmock.rb)

# Include Unity and CMock headers
include_directories(${CMAKE_SOURCE_DIR}/Unity/src)
include_directories(${CMAKE_SOURCE_DIR}/CMock/src)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/mocks)

# Enable CTest
enable_testing()

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/mocks/Mockmy_interface.c
    COMMAND ruby ${CMOCK_RUBY_SCRIPT} ${CMAKE_SOURCE_DIR}/my_interface.h
    DEPENDS ${CMAKE_SOURCE_DIR}/my_interface.h
)

message(${CMAKE_CURRENT_BINARY_DIR})

# Create test executable
add_executable(test_my_interface test_my_interface.c ${UNITY_SRC} ${CMAKE_CURRENT_BINARY_DIR}/mocks/Mockmy_interface.c ${CMAKE_SOURCE_DIR}/CMock/src/cmock.c)
target_link_libraries(test_my_interface PRIVATE)

# Register test executable with CTest
add_test(NAME test_my_interface COMMAND test_my_interface)
