//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main(){
    int integer;
    
    printf("Enter an integer = ");
    scanf("%d",&integer);

    if(integer>0){
        printf("it is positive integer");
    }
    else if(integer==0){
       printf("it is a zer0");
    } 
    else{
        printf("it is a negative integer");
    }
    return 0;
}