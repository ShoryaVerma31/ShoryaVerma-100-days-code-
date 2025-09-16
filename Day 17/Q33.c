//Q33: Write a program to check if a number is an Armstrong number.

/*An Armstrong number is a number that is equal to the sum of its digits, each raised to the power of the 
number of digits. This means if you take each digit in the number, raise it to the power of the
total number of digits, and add them up, you get the original number.*/
/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>
#include<math.h>

int main(){
    int original_number,num,remainder, n = 0;
    double result=0.0;
    printf("Enter a number : ");
    scanf("%d",&num);

    original_number = num;

    while(original_number != 0){
        original_number /= 10;
        n++; 
    }

    original_number = num;

    while(original_number != 0){
        remainder = original_number%10; //to extract the last digit from the original_number and store in remainder.
        result += pow(remainder,n);
        original_number = original_number/10; // to eliminate the last digt from the original number.
    }
    if((int)result == num){
        printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an Armstrong number.\n",num);
    }

    return 0;
}