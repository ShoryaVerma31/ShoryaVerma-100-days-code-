//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    int hours , minutes , seconds;
    printf("Enter time (in seconds) = ");
    scanf("%d",&seconds);
    hours = seconds /3600;
    minutes= (seconds%3600)/60;
    seconds = seconds%60;

    printf("your time is %d:%d:%d",hours,minutes,seconds);
    return 0;
}