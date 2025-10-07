/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);      // read input including spaces
    str[strcspn(str, "\n")] = '\0';     // remove newline character

    len = strlen(str);                   // find string length

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {     // print characters in reverse
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
