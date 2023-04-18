add_library(submodule1_obj OBJECT submodule1.cpp)
target_include_directories(submodule1_obj PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
