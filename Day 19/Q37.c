//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>

int main(){
    int num1, num2 ,HCF, LCM;
    printf("Enter the value of num1 : ");
    scanf("%d",&num1);
    printf("Enter the value of num2 : ");
    scanf("%d",&num2);

    int number_second = num2;
    int number_first = num1;

    while(num2 != 0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
        
    }
    HCF = num1; 
    LCM = (number_first*number_second)/HCF; /* num1 & num2 values get changed now.so, we can not use them here ,
                                               thats why we store them in a new variables earlier.*/
    
    printf("LCM = %d\n", LCM);

    return 0;
}