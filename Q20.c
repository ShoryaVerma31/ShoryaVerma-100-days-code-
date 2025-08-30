//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.
/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>

int main(){
    int choice;
    printf("choices are 1- Monday, 2- Tuesday 3- Wednesday 4- Thursday 5- Friday 6- Saturday 7- Sunday");
    printf("\nEnter your choices based on numbers(1-7): ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1 : printf("Monday"); break;
        case 2 : printf("Tuesday"); break;
        case 3 : printf("Wednesday"); break;
        case 4 : printf("Thursday"); break;
        case 5 : printf("Friday"); break;
        case 6 : printf("Saturday"); break;
        case 7 : printf("Sunday"); break;
        default: printf("Invalid Choice"); break;

    }
    return 0;
}