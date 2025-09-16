//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    long long num, result = 0, place = 1, temp;
    int digit, count = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    temp = num;

    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        if (digit == 0) digit = 1;
        else if (digit == 1) digit = 0;
        else {
            printf("Invalid input! Only 0s and 1s allowed.\n");
            return 1;
        }
        result = digit * place + result;
        place *= 10;
        temp /= 10;
    }

    printf("1's Complement: %0*lld\n", count, result);

    return 0;
}
