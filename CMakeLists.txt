cmake_minimum_required(VERSION 3.15.0)
project(BEJ-decoder VERSION 0.1.0 LANGUAGES C)

enable_testing()
add_subdirectory(test)

file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options(-Wall -Wextra -Wpedantic -g)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_executable(BEJ-decoder ${SOURCE_FILES})
target_include_directories(BEJ-decoder PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)