/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // Traverse all diagonals starting from first row
    for(int d = 0; d < n + m - 1; d++) {
        int r = (d < m) ? 0 : d - m + 1;
        int c = (d < m) ? d : m - 1;

        while(r < n && c >= 0) {
            printf("%d ", a[r][c]);
            r++;
            c--;
        }
    }

    printf("\n");
    return 0;
}