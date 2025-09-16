//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>

int main(){
    int digit , num;
    int product = 1;
    int hasodd = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    int given_number = num;
    
    while(num>0){
        digit = num % 10; //to get last digit of a number 
        if(digit % 2 != 0){
            product *= digit;
            hasodd = 1;
        }
        
        num /=10; // remove last digit
    }
    printf("Product of odd digits in %d = %d\n",given_number,product);

    return 0;
}