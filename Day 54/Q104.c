/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that 
the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer
for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    /* sum (1 to x) = sum (x to n)  -> pivot condition for this question
    
    total = (n*(n+1))/2;
    sum 1 to x-1 = ((x-1)*x)/2;
    sum 1 to x = (x*(x+1))/2;

     sum (x to n) = total - sum (1 to x-1);
     sum (1 to x) = total - sum (1 to x-1);

     (x*(x+1))/2  = total - ((x-1)*x)/2;
     (x*(x+1))    = 2*total - ((x-1)*x);
      x^2 + x     = 2*total - x^2 +x;
      2*(x^2)     = 2* total;
        x^2       =  total;
        x = sqrt(total);   -->> we get this condition, when we assume pivot condition. */

    int total = (n*(n+1))/2;
    int x = (int)sqrt(total);

    if (x*x == total){
        printf("%d", x);
    }
    else{
        printf("-1");
    }

    return 0;
}