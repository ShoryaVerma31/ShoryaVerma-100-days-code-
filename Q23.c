//Q23: Write a program to calculate a library fine based on late days.
/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>

int main(){
    int days, fine = 0;
    printf("Enter the number of late days : ");
    scanf("%d",&days);

    if(days<=5){
        fine = days*2; // book return within 1-5 days -> 2 rupees per day
        printf("fine %d rupees",fine);
    }
    else if(days<=10){
        fine = days*4; // book return between 6-10 days -> 4 rupees per day
        printf("fine %d rupees",fine);
    }

    else if(days<=30){
        fine = days*6; // book return between 11- 30 days -> 6 rupees per day
        printf("fine %d rupees",fine);
    }
    else{
        printf("Membership cancelled"); //if  late days extended by 30 ,membership must be cancelled 
    }
    return 0; 
}