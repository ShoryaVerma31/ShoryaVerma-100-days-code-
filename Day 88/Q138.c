/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include<stdio.h>

enum traffic {RED, YELLOW, GREEN};

int main(){
    enum traffic a;
    
    for(a=RED; a<=GREEN; a++){
        switch(a){
            case RED : printf("RED = %d\n", RED); break;
            case YELLOW : printf("YELLOW = %d\n", YELLOW); break;
            case GREEN : printf("GREEN = %d\n", GREEN); break;
        }
    }
    

    return 0;
}

