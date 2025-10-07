/*Q76: Check if a matrix is symmetric (a and transpose of a are same).

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int n, m, i, j, isSymmetric = 1;

    printf("Enter number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter number of columns in the matrix: ");
    scanf("%d", &m);

    if(n != m) {
        printf("False (Matrix is not square)\n");
        return 0;
    }

    int a[n][m];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if(isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
