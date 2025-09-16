//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>

int main(){
    int decimal_number, binary_number =0, remainder, i =1; //
    
    printf("Enter the  decimal number which you want to convert into binary number : ");
    scanf("%d",&decimal_number);

    while (decimal_number !=  0){
          remainder = decimal_number % 2;
          decimal_number = decimal_number/2;
          binary_number = binary_number + remainder*i;
          i*=10;
    }
    
    printf("In binary -> %d\n",binary_number);
    return 0;
}