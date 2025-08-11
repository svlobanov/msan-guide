# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.10)
project(small-examples)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Find all .c files in current directory
file(GLOB C_SOURCES "*.c")

# Create separate executable for each .c file
foreach(SOURCE_FILE ${C_SOURCES})
    # Get filename without extension
    get_filename_component(EXECUTABLE_NAME ${SOURCE_FILE} NAME_WE)
    
    # Create executable
    add_executable(${EXECUTABLE_NAME} ${SOURCE_FILE})
endforeach() 