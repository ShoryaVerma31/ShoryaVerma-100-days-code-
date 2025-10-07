/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include<stdio.h>

int main(){
    int m,n,p,i,j,k;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter rows and columns of matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of matrix B (n p): ");
    scanf("%d %d", &n, &p);  
    // number of column in A must be equal to number of rows in B for mutilplying two matrices.

    printf("Enter elements of matrix A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B:\n");
    for(i=0; i<n; i++){
        for(j=0; j<p; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Multiply A and B → C
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Resulting Matrix C (m x p):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}