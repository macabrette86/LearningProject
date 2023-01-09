cmake_minimum_required(VERSION 2.8)
project( ProjectVision )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
#add_library(mylib my_lib.cpp my_lib.hpp)
add_executable( ../results/bin/TryVision ../src/ProjectVision/TryVision.cpp )
target_link_libraries( ../results/bin/TryVision ${OpenCV_LIBS} )

