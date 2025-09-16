//Q18: Write a program to assign grades based on a percentage input.
/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>

int main(){
    int percentage;
    printf("Enter your percentage : ");
    scanf("%d",&percentage);

    if(percentage<=100 && percentage>90){
        printf("Grade = A");
    }
    else if(percentage<=90 && percentage>80){
        printf("Grade = B");
    }
    else if(percentage<=80 && percentage>70){
        printf("Grade = C");
    }
    else if(percentage<=70 && percentage>60){
        printf("Grade = D");
    }
    else if(percentage<=60 && percentage>50){
        printf("Grade = E");
    }
    else if(percentage<=50 && percentage>40){
        printf("Grade = F");
    }
    else{
        printf("Fail");
    }
    return 0;
}