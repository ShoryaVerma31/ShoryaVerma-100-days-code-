/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element.
 Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    int num[n];
    int count[50] = {0};
    printf("Enter the %d numbers: ", n);
    
    for(int i = 0; i<n ;i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i<n; i++){
        if(count[num[i]] == 1){
           printf("Repeated element: %d", num[i]);
           return 0;
        }

        count[num[i]] = 1; // to marks that number appered once
    }

    printf("no repeated number in the array");
    
    return 0;
}    