//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>

int main(){
    int num, sum=0;

    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1; i<num ; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(sum == num){
        printf("It is a perfect number");
    }
    else{
        printf("It is not a perfect number");
    }
    return 0;
}