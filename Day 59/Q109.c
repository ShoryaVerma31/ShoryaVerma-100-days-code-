/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include<stdio.h>

int main(){
    int n ,k;
    printf("Enter the size of  array (arr): ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of the array  : " ,n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the value of k : ");
    scanf("%d",&k);
    int temp_sum =0;
    for(int i=0; i<k; i++){
        temp_sum += arr[i];
    }
    int maxsum = temp_sum;
    for(int i=k; i<n; i++){
        temp_sum = temp_sum - arr[i-k] + arr[i] ;
        if(temp_sum > maxsum){
            maxsum = temp_sum ;
        }
    }
    
    printf("Maximum sum of subarrays of size %d is %d\n",k, maxsum);

    return 0;
}