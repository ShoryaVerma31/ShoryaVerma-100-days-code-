/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
    printf("matrix with %d x %d is\n",n,m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }    
    return 0;
}    