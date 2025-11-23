/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int ch;

    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("input.txt", "r");
    ptr2 = fopen("output.txt", "w");

    if(ptr1 == NULL){
        printf("Error! input.txt file not found\n");
        return 1;
    }
    if(ptr2 == NULL){
        printf("Error! file connot create output.txt file\n");
        return 1;
    }

    while((ch = fgetc(ptr1)) != EOF){
        fputc(toupper(ch), ptr2);
    }
    
    fclose(ptr1);
    fclose(ptr2);
    
    return 0;
}