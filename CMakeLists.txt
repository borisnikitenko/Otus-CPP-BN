# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Homework#2")

# Include sub-projects.
add_subdirectory ("Otus-CPP-BN")

add_executable(hello_world 
    hello_world.cpp
    example.cpp
    example.h
)

set_target_properties(hello_world PROPERTIES
    CXX_STANDARD 22
    CXX_STANDARD_REQUIRED ON
)