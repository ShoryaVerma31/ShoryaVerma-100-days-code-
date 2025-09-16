//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){
    float celsius,fahrenheit;

    printf("Enter the value in celsius\n");
    scanf("%f",&celsius);

    fahrenheit = (9.0/5.0)*celsius + 32 ;// formula to convert Celsius to Fahrenheit.
    printf("temperature from %f Celsius to Fahrenheit is %f.", celsius,fahrenheit);
    return 0;
}