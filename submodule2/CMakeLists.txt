add_library(submodule2_obj OBJECT submodule2.cpp)
target_include_directories(submodule2_obj PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
