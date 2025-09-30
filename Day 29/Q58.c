/*Q58: Find the maximum and minimum element in an array.


Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>

int main(){
    int n; 
    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of an array : ");
    // read elements
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    int min= arr[0], max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        } 
    }

    printf("Maximum element in this array is %d\n.", max);
    printf("Minimum element in this array is %d\n.", min);

    return 0;
}