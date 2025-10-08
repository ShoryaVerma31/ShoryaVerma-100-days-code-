
/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int i;
    int freq[26] = {0};  // frequency array for 'a' to 'z'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // increase frequency of this character( str[i] - 'a' converts the character to an index 0–25)
            if (freq[str[i] - 'a'] == 2) {  // first time it repeats
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
