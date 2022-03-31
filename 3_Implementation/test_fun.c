#include "unity.h"
#include "main.h"


void setup(void)
{
}

void tearDown(void)
{
}

void auto_test_add()
{
    TEST_ASSERT_EQUAL(0, add(0,0));
    TEST_ASSERT_EQUAL(10, add(7,3));
    TEST_ASSERT_EQUAL(-10, add(-7,-3));
    TEST_ASSERT_EQUAL(-10, add(-20,10));
}

void auto_test_avg()
{
    TEST_ASSERT_EQUAL(0, avg(0));
    TEST_ASSERT_EQUAL(5, avg(10));
    TEST_ASSERT_EQUAL(-5, avg(-10));
    
}

void auto_test_percentage()
{
    TEST_ASSERT_EQUAL(0, percentage(0));
    TEST_ASSERT_EQUAL(100, percentage(1));
    TEST_ASSERT_EQUAL(-100, percentage(-1));
    
}

int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(auto_test_add);

    RUN_TEST(auto_test_avg);

    RUN_TEST(auto_test_percentage);

    return (UnityEnd());
}