#include "unity.h"
#include "connect4.h"


//NOTE : x_in_a_row(needed length of line to win, size of array to be passed, array) this is the format

//test to see if board is built
void setUp(void) {
    // set stuff up here

}

//test to see if proper exit message displayed
void tearDown(void) {
    // clean-up stuff up here
}

/////////////////////////////////////////////
//
// x_in_a_row Tests
//
/////////////////////////////////////////////

void sample_pass() {
  int array[] = {3, 3, 4, 5, 7, 2 };
  TEST_ASSERT_EQUAL(3, x_in_a_row(2, 6, array));
}

void sample_fail() {
  int array[] = {2, 2, 3, 3, 4, 5, 7};
  TEST_ASSERT_EQUAL(3, x_in_a_row(2, 7, array));
}


/////////////////////////////////////////////
//
// Main
//
/////////////////////////////////////////////

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(sample_pass);
    RUN_TEST(sample_fail);
    return UNITY_END();
}
