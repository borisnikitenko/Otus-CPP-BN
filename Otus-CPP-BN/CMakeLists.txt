# CMakeList.txt : CMake project for Otus-CPP-BN, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Otus-CPP-BN "Otus-CPP-BN.cpp" "Otus-CPP-BN.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Otus-CPP-BN PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
