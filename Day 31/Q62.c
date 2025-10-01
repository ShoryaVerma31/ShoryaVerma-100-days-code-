/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>

int main(){
    int n , temp;
    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of an array : ");
    // read elements
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
     printf("after reversed : ");
    for(int i=0; i<n; i++){
    printf("%d ",arr[i] );
    }
    return 0;
}