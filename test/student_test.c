#include "unity.h"
#include "connect4.h"


//NOTE : x_in_a_row(needed length of line to win, size of array to be passed, array) this is the format


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

//Dan tests////
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

void H_top(){

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

void H_middle(){

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

//GetDiagonal tests//CHECK HOW TO COMPARE ARRAYS
void D_Up_upperCorner(){

int array[6][6] =
{{1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1}
};
int correctOutput[] = {1};
int StartRow = 0;
int StartCol = 0;
int width = 6;
int height = 6;
int[] actualOutput = getDiagonalUp(StartCol, StartRow, width, height, array);

//check size of arrays
TEST_ASSERT_EQUAL(getArraySize(actualOutput,correctOutput));

//check content of arrays
for(int i = 0; i<sizeof correctOutput; i++){
TEST_ASSERT_EQUAL(correctOutput[i],);
}

//////////Riley tests

void sample_V_Left(){
int column = 0;
int correctOutput[6] = {1,2,1,1,2,2};
int array[6][6] = {
{1,-1,-1,-1,-1,-1},
{2,-1,-1,-1,-1,-1},
{1,-1,-1,-1,-1,-1},
{1,-1,-1,-1,-1,-1},
{2,-1,-1,-1,-1,-1},
{2,-1,-1,-1,-1,-1},
};
int actualOutput[] = getVertical(6,column,array)

for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
}

void sample_V_Right(){
int column = 0;
int correctOutput[6] = {1,2,1,1,2,2};
int array[6][6] = {
{-1,-1,-1,-1,-1,2},
{-1,-1,-1,-1,-1,2},
{-1,-1,-1,-1,-1,1},
{-1,-1,-1,-1,-1,2},
{-1,-1,-1,-1,-1,2},
{-1,-1,-1,-1,-1,2},
};

int actualOutput[] = getVertical(6,column,array);

for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
}

void sample_V_Center(){
int column = 3;
int correctOutput[6] = {2,1,2,1,1,2};
int array[6][6] = {
{-1,-1,-1,2,-1,-1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,2,-1,-1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,2,-1,-1},
};
int actualOutput[] = getVertical(6,column,array);

for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
}

void sample_D_Down_Top_Right(){
int rows = 6;
int columns = 6;
int startingRow = 0;
int startingCol = 5;
int correctOutput[1] = {1};
int array[6][6] = {
{-1,-1,-1,2,-1,1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,2,-1,-1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,1,-1,-1},
{-1,-1,-1,2,-1,-1},
};
int actualOutput[] = getDiagonalDown(startingCol, startingRow, columns, rows, array);
for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
}

void sample_D_Down_Bottom_Left(){
int rows = 6;
int columns = 6;
int startingRow = 5;
int startingCol = 0;
int correctOutput[1] = {2};
int array[6][6] = {
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1},
{2,-1,-1,-1,-1,-1},
};
int actualOutput[] = getDiagonalDown(startingCol, startingRow, columns, rows, array);
for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
}

void sample_D_Down_Center(){
int rows = 6;
int columns = 6;
int startingRow = 0;
int startingCol = 0;
int correctOutput[6] = {1,2,2,2,1,1};
int array[6][6] = {
{1,-1,-1,-1,-1,-1},
{-1,2,-1,-1,-1,-1},
{-1,-1,2,-1,-1,-1},
{-1,-1,-1,2,-1,-1},
{-1,-1,-1,-1,1,-1},
{-1,-1,-1,-1,-1,1},
};
int actualOutput[] = getDiagonalDown(startingCol,startingRow,columns, rows, array);
for(int i = 0; i < 6; i++){
    TEST_ASSERT_EQUAL(correctOutput[i], actualOutput[i]);
}
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
