//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter your first value , a\n");
    scanf("%d",&a);
    printf("Enter your second value , b\n");
    scanf("%d",&b);
    // swapping with third variable c
    c=a;
    a=b;
    b=c;
    printf("your first value ,a is %d and second value ,b is %d" , a,b);
    return 0;
}