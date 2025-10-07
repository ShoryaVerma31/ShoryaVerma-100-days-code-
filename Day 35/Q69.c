/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>

int main(){
    int n,i;
    int largest , second_largest; 
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements :\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    for(int i=2; i<n; i++){
        if(arr[i] > largest){
            second_largest =largest;
            largest = arr[i];
        } 
        else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }

    printf("Second largest element : %d\n",second_largest);
    return 0;
}
