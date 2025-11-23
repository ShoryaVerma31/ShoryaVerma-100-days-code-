/*Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include<stdio.h>

enum Operation{SUCCESS, FAILURE, TIMEOUT};

int main(){
    enum Operation  a;
    
    for(a=SUCCESS; a<=TIMEOUT; a++){
        switch(a){
            case SUCCESS : printf("SUCCESS=%d, ", SUCCESS); break;
            case FAILURE : printf("FAILURE=%d, ", FAILURE); break;
            case TIMEOUT : printf("TIMEOUT=%d ", TIMEOUT); break;
        }
    }
    
    return 0;
}

