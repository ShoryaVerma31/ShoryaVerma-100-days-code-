/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  
    int digit, max = 0, mostFreq = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);
    
    while(num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            mostFreq = i;
        }
    }
    //The program checks digits from 0 to 9 in order.
    //The first digit that reaches the maximum count becomes the “most frequent digit.”
    //It does not update if another digit has the same frequency — only if it’s greater(as per the question requirement).

    printf("Digit that occurs most: %d\n", mostFreq);

    return 0;
}


