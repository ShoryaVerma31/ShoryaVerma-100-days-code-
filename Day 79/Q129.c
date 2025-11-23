/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include<stdio.h>

int main(){
    int num1, num2, num3, num4, num5;

    FILE *ptr;
    ptr = fopen("numbers.txt", "r");

    if(ptr == NULL){
        printf("Error! numbers.txt file not found\n");
        return 1;
    }

    fscanf(ptr, "%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    printf("Sum: %d\n", (num1 + num2 + num3 + num4 + num5) );
    printf("Average: %.2f\n", (float)((num1 + num2 + num3 + num4 + num5)/5.0) );
    
    fclose(ptr);

    return 0;
}    