cmake_minimum_required(VERSION 3.7)
project (MatplotlibCPP_Test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Python3 COMPONENTS Development NumPy)
include_directories(${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})

add_executable(minimal ${CMAKE_CURRENT_SOURCE_DIR}/../examples/minimal.cpp)
target_link_libraries(minimal ${Python3_LIBRARIES})

add_executable(basic ${CMAKE_CURRENT_SOURCE_DIR}/../examples/basic.cpp)
target_link_libraries(basic ${Python3_LIBRARIES})

add_executable(modern ${CMAKE_CURRENT_SOURCE_DIR}/../examples/modern.cpp)
target_link_libraries(modern ${Python3_LIBRARIES})

add_executable(animation ${CMAKE_CURRENT_SOURCE_DIR}/../examples/animation.cpp)
target_link_libraries(animation ${Python3_LIBRARIES})

add_executable(nonblock ${CMAKE_CURRENT_SOURCE_DIR}/../examples/nonblock.cpp)
target_link_libraries(nonblock ${Python3_LIBRARIES})

add_executable(xkcd ${CMAKE_CURRENT_SOURCE_DIR}/../examples/xkcd.cpp)
target_link_libraries(xkcd ${Python3_LIBRARIES})

add_executable(bar ${CMAKE_CURRENT_SOURCE_DIR}/../examples/bar.cpp)
target_link_libraries(bar ${Python3_LIBRARIES})

add_executable(dip ${CMAKE_CURRENT_SOURCE_DIR}/../examples/dip.cpp)
target_link_libraries(dip ${Python3_LIBRARIES})