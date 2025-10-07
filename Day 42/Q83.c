/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads input including spaces

    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Convert uppercase to lowercase (optional)
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check for consonants (only alphabetic characters)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}

