//Q2 (User Inputs, Operations & Output)
//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main(){
    float a,b; 
    /*we use float instead of int becoz if we have those inputs which are not completely divisible then
    output of quotient will not be appropriate, ex. 9/2 */

    printf("Enter the value of a\n");
    scanf("%f",&a);
    printf("Enter the value of b\n");
    scanf("%f",&b);

    printf("sum = %.2f\n",a+b);
    printf("difference=%.2f\n",a-b);
    printf("product=%.2f\n",a*b);
    printf("quotient=%.2f\n",a/b);

    return 0;
}
