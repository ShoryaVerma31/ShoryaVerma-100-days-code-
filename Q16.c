//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a ,&b ,&c);

    if(a>b && a>c){
        printf("largest among these three is %d",a);
    }
    else if(b>a && b>c){
        printf("largest among these three is %d",b);
    }
    else{
        printf("largest among these three is %d",c);
    }
    return 0;
}