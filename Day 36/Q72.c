/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>

int main(){
    int n, m,i, j;
    int sum=0;
    printf("Enter number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter number of column in the matrix: ");
    scanf("%d", &m);

    int a[n][m];
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }    
    printf("Sum of all elements in a matrix is %d", sum);
    return 0;
}