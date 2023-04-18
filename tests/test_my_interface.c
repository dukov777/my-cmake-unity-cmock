#include "unity.h"
#include "Mockmy_interface.h"

void setUp(void) {}
void tearDown(void) {}

void test_my_interface_function(void) {
    my_interface_function_ExpectAndReturn(2, 3, 5);
    int result = my_interface_function(2, 3);
    TEST_ASSERT_EQUAL(5, result);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_my_interface_function);
    return UNITY_END();
}
