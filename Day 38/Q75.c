/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int n1, m1, n2, m2, i, j;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &n1, &m1);

    int a[n1][m1];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < m1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &n2, &m2);

    int b[n2][m2];
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < n2; i++) {
        for(j = 0; j < m2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if(n1 != n2 || m1 != m2) {
        printf("Matrix addition not possible — dimensions must match.\n");
        return 0;
    }

    int sum[n1][m1];
    for(i = 0; i < n1; i++) {
        for(j = 0; j < m1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < m1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
