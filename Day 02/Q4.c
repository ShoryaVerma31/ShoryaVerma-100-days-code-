//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    int radius;
    printf("Enter the value of radius\n");
    scanf("%d",&radius);
    printf("The Area of a circle having radius %d is %.2f\n",radius,3.14*radius*radius);
    printf("The Circumference of a circle having radius %d is %.2f\n",radius,2*3.14*radius);
    return 0;
}