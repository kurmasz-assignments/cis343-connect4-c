/* 
   zzNAMEzz 

   Place all your Connect4 functions here --- except for main.
   main() needs to go in its own separate .c file.
*/
#include "connect4.h"

// You don't have to use this.  It's just here as a demo.
int x_in_a_row(int x, int length, int array[]) {
    
    // This isn't correct.  It's just for demonstration purposes.
    if (length >=2 && array[0] == array[1]) {
        return array[0];
    } else {
        return -1;
    };
}


//************************************helper functions****************************************//

//checks size of array
int getArraySize(int[] array){
    int size = 0;
    size = sizeof array / sizeof array[0];
    return size;
}

//compares two arrays 1=true, 0=false
int compareArrays(int array1[], int array2[]){

int flag = 0;
int arrayLength = 0;

//if arrays two different sizes return false
if(getArraySize(array1) != getArraySize(array2)){
flag = 0;
return flag;
}
//else check contents
else{
    arrayLength = getArraySize(array1);

    for(int i = 0; i<arrayLength; i++){
    //if elements match flag is true, repeat
     if(array1[i] == array2[i]){
        flag = 1;
        }
   //if any elements dont match return false
     else{
        flag = 0;
        return flag;
     }
    }
}
//if all elements match this return is reached and true is returned
return flag;
}

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

                case 'a':
                col = 0;
                break;

                case 'b':
                col = 1;
                break;

                case 'c':
                col = 3;
                break;

                case 'd':
                col = 4;
                break;

                case 'e':
                col = 5;
                break;

                case 'f':
                col = 6;
                break;

                case 'g':
                col = 7;
                break;

                case 'h':
                col = 8;
                break;

                case 'i':
                col = 9;
                break;

                case 'j':
                col = 10;
                break;

                case 'k':
                col = 11;
                break;

                case 'l':
                col = 12;
                break;

                case 'm':
                col = 13;
                break;

                case 'n':
                col = 14;
                break;


                case 'o':
                col = 15;
                break;

                case 'p':
                col = 16;
                break;

                //quit -3 causes program to quit
                case 'q':
                col = -3;
                break;

                default:
                break;

                }



                //return column number
                return col;

}