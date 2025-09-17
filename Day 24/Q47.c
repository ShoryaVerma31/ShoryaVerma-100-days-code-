//Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include<stdio.h>

int main(){
    int n=5; // number of rows and cloumns

    for(int i=1; i<=n ; i++){       //loop for rows
        for(int j=1; j<=i; j++){    //loop for columns
            printf("*");
        }
        printf("\n");  //move to next line after printing one row.
    }
    return 0;
}