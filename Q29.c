//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>

int main(){
    int num, k=1;
    printf("enter your number \n");
    scanf("%d", &num);
    for (int i= 1; i <= num; i++){
        k = k * i;
    }
    printf("factorial of your entered number is %d\n",k );

    return 0;
}