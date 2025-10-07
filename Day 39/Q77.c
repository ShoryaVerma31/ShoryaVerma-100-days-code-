/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>

int main() {
    int n, m, i, j;
    int isDistinct = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    if(n != m) {
        printf("Matrix is not square — no main diagonal\n");
        return 0;
    }

    int a[n][m];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) { 
            if(a[i][i] == a[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if(!isDistinct) break;
    }

    if(isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
