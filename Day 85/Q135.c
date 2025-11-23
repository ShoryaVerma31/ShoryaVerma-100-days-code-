/*Q135: Assign explicit values starting from 10 and print them.

Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/

#include<stdio.h>

enum alpha{A=10, B, C };

int main(){

    int a;

    for(a=A; a<=C; a++){
        switch(a){
            case A : printf("A = %d\n", A); break;
            case B : printf("B = %d\n", B); break;
            case C : printf("C = %d\n", C); break;
        }
    }

    return 0;
}