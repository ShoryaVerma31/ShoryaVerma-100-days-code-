/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main(){
    int n=9,stars;

    for(int i =1 ; i<=n; i++){
        if(i<=5){
            stars = 2*i -1; 
        }
        else{
            stars = 2*(n-i+1)-1; //for reverse sequence.
        }
        for(int j =1; j<=stars; j++){ 
            printf("*");
        }
       printf("\n");
    }
    
    return 0;
}