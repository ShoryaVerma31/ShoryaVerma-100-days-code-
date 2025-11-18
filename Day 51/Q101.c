
Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include<stdio.h>

int findfirst(int num[], int n, int target){
    int start=0, end=n-1, result=-1;
    while(start < end){
        int mid = (start + end)/2;
        if(num[mid] == target){
            result = mid;
            end = mid -1; // search left in num
        }
        else if(num[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return result;
} 
int main(){
    int n ,target;
    printf("Enter the size of sorted array (num): ");
    scanf("%d",&n);
    int num[n];
    printf("Enter the %d elements in the array in increasing order : " ,n);
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",num[i]);
    }
    printf("Enter the target : \n");
    scanf("%d",&target);

    printf("%d",findfirst(num, n, target));

    return 0;
}