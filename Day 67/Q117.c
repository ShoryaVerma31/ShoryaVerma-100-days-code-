/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
num1 = [2,7,11,15] num2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
num1 = [1,2,7] num2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
num1 = [-10,-2,7] num2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int num1[m];
    printf("Enter %d sorted elements: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int num2[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // merging both m and n
    while (i < m && j < n){
        if (num1[i] < num2[j]){
            merged[k++] = num1[i++];
        } 
        else{
            merged[k++] = num2[j++];
        }
    }

    // putting remaining elements of num1 to merged array
    while(i < m){
        merged[k++] = num1[i++];
    }

    // putting remaining elements of num2 to merged array
    while(j < n){
        merged[k++] = num2[j++];
    }

    for(int x = 0; x < m + n; x++){
        printf("%d ", merged[x]);
    }

    return 0;
}
