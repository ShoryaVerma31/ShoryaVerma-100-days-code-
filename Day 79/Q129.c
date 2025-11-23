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
    int num, sum=0, count=0;
    float avg =0.0;

    FILE *ptr;
    ptr = fopen("numbers.txt", "r");

    if(ptr == NULL){
        printf("Error! numbers.txt file not found\n");
        return 1;
    }

    while(fscanf(ptr, "%d", &num ) == 1){
        sum += num;
        count++;
    }

    printf("Sum: %d\n", sum);
    
    if(count > 0){
      avg =(float)sum/count;
    }
    printf("Average: %.2f\n", avg);
    fclose(ptr); 
    return 0;
}    