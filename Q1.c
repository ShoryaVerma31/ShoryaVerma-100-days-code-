//Q1 (User Inputs, Operations & Output)
//Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    int first, second, sum;
    printf("Enter your two number\n");
    scanf("%d%d", &first ,&second);
    sum = first + second;
    printf("The sum of your two number is %d\n", sum);
    return 0;

}
