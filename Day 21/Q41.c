//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>

int main(){
    int num,temp,last,first,middle, digits=0;
    int new_num,pow10=1;

    printf("Enter the number :");
    scanf("%d",&num);

    temp = num;

    last = num % 10 ;

    while(num>0){ 
        digits++;
        if(num < 10)
            first = num;
            num/10;
        }

    // Find power of 10^(digits-1)
    for (int i = 1; i <= digits - 1; i++)
        pow10 *= 10;

    // Extract middle part
    middle = (temp % pow10) / 10;

    // Reconstruct number
    new_num = (last * pow10) + (middle * 10) + first;

    printf("After swapping: %d\n", new_num);

    return 0;
}
