//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>

int main(){
    int sum=0,i=1,n; // here n is a value upto which you want to get a sum.

    printf("Enter the value  of n = ");
    scanf("%d",&n);

     while(i<=n){
        sum = sum +i;
        i++;
     }
     printf("Sum of natural numbers from 1 to %d is %d",n,sum);
    return 0;
}