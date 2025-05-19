cmake_minimum_required(VERSION 3.16)

project(MyQt6App LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Set Qt6 install path (adjust if needed)
set(CMAKE_PREFIX_PATH "/home/elanda/Qt/6.6.3/gcc_64/lib/cmake")
set(CMAKE_PREFIX_PATH "/home/elanda/Qt/6.6.3/gcc_64/lib/cmake/Qt6")

find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Add include/ to compiler search path (if used)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Recursively gather source, headers, and UI files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_SOURCE_DIR}/src/*.cpp
    ${CMAKE_SOURCE_DIR}/src/*.h
    ${CMAKE_SOURCE_DIR}/src/*.ui
    ${CMAKE_SOURCE_DIR}/include/*.h
)

# Define the executable
add_executable(MyQt6App ${SRC_FILES})

# Link against Qt6
target_link_libraries(MyQt6App PRIVATE Qt6::Widgets)

# Output executable to bin/
set_target_properties(MyQt6App PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
