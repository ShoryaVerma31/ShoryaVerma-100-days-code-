//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>

int main(){
    int num, remainder , sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    
    int initial_number = num;

    while(num != 0){
        remainder = num % 10;
        sum += remainder;
        num = num / 10;
    }

    printf("Sum of the digits in %d is %d",initial_number,sum);

    return 0;
}