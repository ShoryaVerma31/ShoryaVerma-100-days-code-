/*Q90: Toggle case of each character in a string.(Change uppercase letters → to lowercase)or
                                                 (Change lowercase letters → to uppercase)

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // lowercase -> uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // uppercase -> lowercase
    }

    printf("%s", str);
    return 0;
}

