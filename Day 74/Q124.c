/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from t
he source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include<stdio.h>
#include<string.h>

int main(){
    char ch;
    char filename1[100];
    char filename2[100];
    
    printf("Enter the exiting filename(source file): ");
    fgets(filename1, sizeof(filename1), stdin);
    filename1[strcspn(filename1, "\n")] = '\0';

    printf("Enter the filename(destination file): ");
    fgets(filename2, sizeof(filename2), stdin);
    filename2[strcspn(filename2, "\n")] = '\0';

    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen(filename1, "r");
    ptr2 = fopen(filename2, "w");

    if(ptr1 == NULL){
        printf("Error! Source file not found\n");
        return 1;
    }
    if(ptr2 == NULL){
        printf("Error! cannot create destination file\n");
        return 1;
    }
   

    while((ch = fgetc(ptr1)) != EOF){
        fputc(ch, ptr2);
    }

    printf("File copied successfully to %s", filename2);
    
    fclose(ptr1);
    fclose(ptr2);

    return 0;

}