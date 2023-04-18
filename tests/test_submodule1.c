#include "unity.h"
#include "../submodule1/submodule1.h"

void setUp(void) {
    // Code to be executed before each test
}

void tearDown(void) {
    // Code to be executed after each test
}

void test_submodule1_function(void) {
    // Test code for submodule1_function
    // For example:
    // int expected = ...;
    // int actual = submodule1_function();
    // TEST_ASSERT_EQUAL(expected, actual);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_submodule1_function);
    return UNITY_END();
}
