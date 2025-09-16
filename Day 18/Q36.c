//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>

int main(){
    int num1, num2,temp;
    printf("Enter the value of num1 : ");
    scanf("%d",&num1);
    printf("Enter the value of num2 : ");
    scanf("%d",&num2);

    while(num2 != 0){
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF = %d\n",num1);

    return 0;
}
