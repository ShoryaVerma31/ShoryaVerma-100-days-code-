//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>

int main(){
    int C,D;
    printf("Enter your first value , C\n");
    scanf("%d",&C);
    printf("Enter the second value , D\n");
    scanf("%d",&D);
    // swapping without third variable.
    C=C+D; // NOW C CHANGES TO C+D
    D=C-D; // AFTER C-D , D=C   
    C=C-D; //  AFTER C-D , C=D 
    printf("Now your first value ,C is %d and second value ,D is %d " , C,D);
    return 0;
}