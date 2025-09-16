//Q24: Write a program to calculate an electricity bill based on units consumed.
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include<stdio.h>

int main(){
    int units ;
    float bill;
    printf("Enter units consumed : ");
    scanf("%d", &units);

    //for first 50 units -> 5 rupees per unit
    //next 100 units -> 7 rupees per unit
    //remaining 100 units -> 12.5 rupees per unit
    
    if(units<=50){
        bill = (units*5) ;
    }
    else if(units<=150){
        bill = (50*5) + ((units -50)*7) ;
    }
    else if(units <= 250){
        bill = (50*5) + (100*7) + ((units-150)*12.5) ;
    }
    else{
        bill = (50*5) + (100*7) + (100*12.5) + ((units-250)*15) ;
    }
    printf(" Bill : %.0f rupees" ,bill); // %.0f -> to get bill in roundoff form
    return 0;
}