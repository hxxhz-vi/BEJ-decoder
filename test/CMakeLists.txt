cmake_minimum_required(VERSION 3.15.0)
project(bej_dec_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  DOWNLOAD_EXTRACT_TIMESTAMP true
)
FetchContent_MakeAvailable(googletest)

# add_executable(bej_dec_test bej_dec_test.cpp)
# target_link_libraries(bej_dec_test PRIVATE bej_dec gtest gtest_main)

# add_test(NAME bej_dec_test COMMAND bej_dec_test)