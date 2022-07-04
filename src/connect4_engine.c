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