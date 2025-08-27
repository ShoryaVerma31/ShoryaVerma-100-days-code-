//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>

int main(){
    char c;
    printf("enter character : ");
    scanf("%c",&c);
    
    if(c == 'a' || c == 'e' || c == 'i'||c == 'o' || c =='u'){
        printf("It is a vowel");
    }
    else{
        printf("It is consonant");
    }
    return 0;
}