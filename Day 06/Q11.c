//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>

int main(){
    int num;

    printf("Enter a num = ");
    scanf("%d",&num);

    if(num%2 == 0 ){
        printf("it is an even number");
    }
    else{
        printf("it is an odd number ");
    }
    return 0;
}