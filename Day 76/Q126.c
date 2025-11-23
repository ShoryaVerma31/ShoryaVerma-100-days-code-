/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include<stdio.h>
#include<string.h>

int main(){
    char line[100];
    char filename[100];
    
    printf("Enter the exiting filename: ");
    fgets(filename, sizeof(filename), stdin);
    filename[strcspn(filename, "\n")] = '\0';

    FILE *ptr;
    
    ptr = fopen(filename , "r");
    if(ptr == NULL){
        printf("Error! file not found");
        return 1;
    }
    
    while(fgets(line, sizeof(line), ptr) != NULL){
        printf("%s", line);
    }

    fclose(ptr);

    return 0;
}