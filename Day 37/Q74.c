/*Q74: Find the transpose of a matrix(rows -> column and column -> row).

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>

int main(){
    int n, m,i, j;
    printf("Enter number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter number of column in the matrix: ");
    scanf("%d", &m);

    int a[n][m];
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int t[m][n];
    for(i=0; i<n; i++){       
        for(j=0; j<m; j++){
             t[j][i] = a[i][j];
        }
    } 
    
    printf("Transpose of the matrix\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", t[i][j]);
        } 
        printf("\n");
    }    
    return 0;
}          