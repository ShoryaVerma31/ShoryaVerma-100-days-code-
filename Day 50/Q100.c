/*Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    scanf("%s", str);

    int num = strlen(str);

    printf("\n--- Sub-Strings---\n");
    for (int i = 0; i < num; i++) {       
        for (int j = i; j < num; j++) {    
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);    // to print sub string
            }
            printf("\n");
        }
    }

    return 0;
}

