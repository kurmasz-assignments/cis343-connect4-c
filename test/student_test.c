#include "unity.h"
#include "connect4.h"


//NOTE : x_in_a_row(needed length of line to win, size of array to be passed, array) this is the format

//test to see if board is built
void setUp(void) {
    // set stuff up here

}


void tearDown(void) {

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
//diagonal, horizontal, and vertical getter tests
//returns rows of vertical in an array
//int[] getVertical(int[][] board){}
//
////returns rows of horizontal in an array
//int[] getHorizontal(int[][] board){}
//
////returns diagonal rows in an array
//int[] getDiagonal(int[][] board){}
//
/////////////////////////////////////////////

void sample_H_bottom(){

int correctOutput[] = {2,2,2,1,1,1};
int row = 5;
int size = 6;
int array[6][6] =
{{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{2,2,2,1,1,1}
};

TEST_ASSERT_EQUAL(correctOutput, getHorizontal(row, size, array));
}

void sample_H_top(){

int correctOutput[] = {1,2,1,1,1,2};
int row = 0;
int size = 6;
int array[6][6] =
{{1,2,1,1,1,2},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1}
};

TEST_ASSERT_EQUAL(correctOutput, getHorizontal(row, size, array));
}

void sample_H_middle(){

int correctOutput[] = {2,2,2,1,1,1};
int row = 2;
int size = 6;
int array[6][6] =
{{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{2,2,2,1,1,1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1}
};

TEST_ASSERT_EQUAL(correctOutput, getHorizontal(row, size, array));
}

//GetDiagonal tests
void sample_D_Up_upperCorner(){

int correctOutput[] = {1};
int StartRow = 0;
int StartCol = 0;
int width = 6;
int height = 6;

int array[6][6] =
{{1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1}
};

TEST_ASSERT_EQUAL(correctOutput, getHorizontal(row, size, array));
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
