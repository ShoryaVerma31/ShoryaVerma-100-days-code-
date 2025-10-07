/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    if(n != m) {
        printf("Matrix is not square — no main diagonal.\n");
        return 0;
    }

    int a[n][m];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += a[i][i];  // Elements a[0][0], a[1][1], ..., a[n-1][n-1]
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}

