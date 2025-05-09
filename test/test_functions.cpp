#include "gtest/gtest.h" // include the gtest functions & macros
#include "functions.h" // include the class header file

// the first test we want to write
TEST(tests, add_standard_integers) { 

    EXPECT_EQ (11, add_integers(5,6));
}