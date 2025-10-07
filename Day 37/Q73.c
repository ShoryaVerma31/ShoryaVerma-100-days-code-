
/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include<stdio.h>

int main(){
    int n, m,i, j;
    int sum=0 ;
    printf("Enter number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter number of column in the matrix: ");
    scanf("%d", &m);

    int a[n][m],rowsum[n];
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){ 
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<n; i++){
        rowsum[i] = 0;        
        for(j=0; j<m; j++){
            rowsum[i] += a[i][j];
        }
    }    
    printf("Sum of each row:\n");
    for(i=0; i<n; i++){
        printf("%d ", rowsum[i]);
    }    
    return 0;
}