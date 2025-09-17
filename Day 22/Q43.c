//Q43: Write a program to check if a number is a strong number(a number whose sum of factorial of the digits of the number is equal to original number).

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>

int main(){
    int num,a,b,c,sum=0;
    
    printf("Enter the number : ");
    scanf("%d",&num);
    
    a=num;
    while(a > 0){
        b = a % 10;
        c =1;
        for( int i = 1; i <= b; i++){
            c = c * i;
        }
        sum = sum + c;
        a= a/10;
    }
    if( sum == num){
        printf("strong number");
    }
    else{
        printf("not a strong number");
    }
    return 0;
}