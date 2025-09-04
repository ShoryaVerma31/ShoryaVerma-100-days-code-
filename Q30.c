//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>

int main(){
    int num, reverse=0 , remainder;
    printf("Enter the number which you want to get reversed : ");
    scanf("%d", &num);

    while (num>0)
    {
        remainder = num %10;
        reverse = (reverse*10) + remainder;
        num = num/10;
    }
    printf("Reverse of your entered number is %d" , reverse);
    
    return 0;
}