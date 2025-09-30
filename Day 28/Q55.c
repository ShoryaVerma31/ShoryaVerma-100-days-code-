//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number upto which you want to print prime numbers : ");
    scanf("%d", &n);

    if(n <= 1){
        printf("No prime numbers upto here..!\n");
    }
    else{
        for(int i = 2; i <= n; i++){
            int isPrime = 1; // take it as a prime.

            for(int j = 2; j*j <= i; j++){
                if(i % j == 0){
                    isPrime = 0; // not a prime.
                    break;
                }
            }

            if(isPrime){
                printf("%d ", i);
            }
        }
    }

    return 0;
}
