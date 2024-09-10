cmake_minimum_required(VERSION 3.20)

project(a1)
find_package(GTest REQUIRED)
set(SANITIZER_CFLAGS -fsanitize=address -fsanitize=undefined)

add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
