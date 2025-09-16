//Q1 Write a program to input two numbers and display their sum.

#include<stdio.h>
int main(){
    int first, second, sum;
    
    printf("Enter your two numbers\n");
    scanf("%d%d", &first ,&second);
    
    sum = first + second;
    
    printf("The sum of your two number is %d\n", sum);
    return 0;

}

