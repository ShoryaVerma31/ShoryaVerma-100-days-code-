//Q22: Write a program to find profit or loss percentage given cost price and selling price.
/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>

int main(){
    float SP,CP;  // SP- selling price, CP- cost price
    float loss, profit, loss_percentage, profit_pecentage;
    printf("Enter cost price : ");
    scanf("%f",&CP);
    printf("Enter selling price : ");
    scanf("%f",&SP);

    if(SP>CP){
        profit = SP-CP;
        profit_pecentage = (profit/CP)*100;
        printf("Profit %.0f%%",profit_pecentage);
    }
    else if(SP<CP){
        loss = CP-SP;
        loss_percentage = (loss/CP)*100;
        printf("Loss %.0f%%",loss_percentage);
    }
    else{
        printf("No Profit No Loss ");
    }
    return 0;
}