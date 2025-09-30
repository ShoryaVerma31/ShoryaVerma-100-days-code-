/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    
    int positive_count=0, negative_count=0, zero_count=0; 
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
           positive_count++;
        }
        if(arr[i] < 0){
            negative_count++;
        }   
        if(arr[i] == 0){
            zero_count++;
        }   
        
    } 
    printf("Positive = %d , Negative = %d , Zero = %d" , positive_count, negative_count, zero_count);
    return 0;
}