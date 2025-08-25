//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
    float principal,rate,time;
    float simple_interest,amount,compund_interest; 

    printf("Enter Principal amount : ");
    scanf("%f",&principal);
    printf("Enter rate of interest : ");
    scanf("%f",&rate);
    printf("Enter Time (in years) : ");
    scanf("%f",&time);

    // calculate simple interest.
    simple_interest = (principal*rate*time)/100;
    // calculate compund interest.
    amount = principal * pow((1+rate/100),time);
    compund_interest = amount - principal;
     
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f", compund_interest);
    return 0;
}