//Q32: Write a program to check if a number is a palindrome. (palindrome -> reads same from forward $ backward )

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
 #include<stdio.h>
 
 int main(){
    int num ,original_number , reverse_number =0 , remainder;
    
    printf("Enetr the original number : ");
    scanf("%d",&num);
   
    original_number = num;
   
    while(num != 0){
        remainder = num%10;
        reverse_number = (reverse_number*10) + remainder;
        num /= 10; // to remove the last digit from original number
    }
    if(original_number == reverse_number){
        printf("%d is a palindrome number.\n", original_number);
    }
    else{
        printf("%d is not a palidrome number.\n",original_number);
    }
    return 0;
 }
