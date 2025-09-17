//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3 
Output 1:
Approximate sum: 3.3 (may be some typo error, output is 2.6)

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>

int main(){
    int n,i;
    double sum=0.0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    

    if(n <= 0){
       printf("Approximate sum: 0.0\n", sum);
       return 0;
    }
    
    sum = 1.0;           // first term is 1
    for(i=2; i<=n; i++)  // stars from 2
    {
        sum = sum + (double)(2 * i - 1) / (2 * i);
    }
    
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}