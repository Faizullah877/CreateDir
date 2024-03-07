# CMakeList.txt : CMake project for create_dir, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (create_dir "create_dir.cpp" "create_dir.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET create_dir PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
