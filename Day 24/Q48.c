/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345


Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include<stdio.h>

int main(){
    int n,i,j;
    n=5;

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
           printf("%d",j); 
        }
        printf("\n");
    }
    return 0;
}