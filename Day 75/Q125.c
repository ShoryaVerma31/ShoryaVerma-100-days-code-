/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at 
the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include<stdio.h>
#include<string.h>

int main(){
    char filename[100];
    char newlines[500];

    printf("Enter the exiting filename: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    FILE *ptr;
    
    ptr = fopen(filename , "a");
    if(ptr == NULL){
        printf("Error! file not found");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(newlines, sizeof(newlines), stdin);
    newlines[strcspn(newlines, "\n")] = '\0';


    fprintf(ptr, "\n%s", newlines);

    fclose(ptr);

    printf("File updated successfully with appended text.");

    return 0;
}