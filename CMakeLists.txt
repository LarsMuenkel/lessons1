cmake_minimum_required(VERSION 3.20)

project(Liraries VERSION 1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_compile_options(-Wall -Wextra - pedantic -O0)

add_executable(Libraries )

add_library(ADD STATIC add.c)
target_include_directories()
add_library(STRINGG SHARED stringg.c)