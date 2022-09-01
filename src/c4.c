/* 
   zzNAMEzz 

   Place your Connect4's main() function here.
   Anything that you want unit tested must go in a separate file.
*/
# include <stdio.h>

int main(int argc, char* argv[]) {
    printf("Implement me.\n");
}





//************************************helper functions****************************************//

//getters for board rows************

//returns rows of vertical in an array
int[] getVertical(int[][] board){}

//returns rows of horizontal in an array
int[] getHorizontal(int[][] board){}

//returns diagonal rows in an array upward slope
int[] getDiagonalUp(int startCol, int startRow, int col, int row, int[][] board){}
//returns diagonal rows in an array upward slope
int[] getDiagonalDown(int startCol, int startRow, int col, int row, int[][] board){}



//getColumnNumber: takes a character related to column and returns numerical value for 2d array
int getColumnNumber(char column){

   //column translated to number
   int col = 0

    switch(column){

                case 'A':
                col = 0;
                break;

                case 'B':
                col = 1;
                break;

                case 'C':
                col = 3;
                break;

                case 'D':
                col = 4;
                break;

                case 'E':
                col = 5;
                break;

                case 'F':
                col = 6;
                break;

                case 'G':
                col = 7;
                break;

                case 'H':
                col = 8;
                break;

                case 'I':
                col = 9;
                break;

                case 'J':
                col = 10;
                break;

                case 'K':
                col = 11;
                break;

                case 'L':
                col = 12;
                break;

                case 'M':
                col = 13;
                break;

                case 'N':
                col = 14;
                break;


                case 'O':
                col = 15;
                break;

                case 'P':
                col = 16;
                break;

                //quit -3 causes program to quit
                case 'Q':
                col = -3;
                break;

                //irrelevent data do nothing and keep current player so they can try again
                default:
                col = -2;

                }



                //return column number

                return col;

}