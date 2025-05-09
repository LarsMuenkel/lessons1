# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(cmake_example VERSION 1.0 LANGUAGES CXX C)

# define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# specify the linker language

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)


# add a library
add_library(lib1 STATIC src/functions.cpp)
# add the includes to the library
target_include_directories(lib1 PUBLIC include src test)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# add an executable and assign files to it
add_executable(cmake_example_exec src/Dynamische_Speicher.cpp)
# add the include directories
target_include_directories(cmake_example_exec PUBLIC include)
# link your libraries
target_link_libraries(cmake_example_exec PRIVATE lib1)

# enable the testing
enable_testing()
# check if we have gtest
find_package(GTest REQUIRED)
# include the gtest CMake stuff
include(GoogleTest)
# create a test executable
add_executable(tests test/test_functions.cpp)
# link the gtest libraries
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
target_link_libraries(tests PRIVATE lib1)
# add the include directories
target_include_directories(tests PUBLIC include)
# discover and add tests to the test list
gtest_discover_tests(tests)