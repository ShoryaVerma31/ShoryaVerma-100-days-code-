/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int ch;
    int vowels=0;
    int consonants=0;

    FILE *ptr;
    ptr = fopen("text.txt", "r");

    if(ptr == NULL){
        printf("Error! text.txt file not found\n");
        return 1;
    }

    while((ch = fgetc(ptr)) != EOF){
        ch = toupper(ch);

        if(isalpha(ch)){
            if( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }
    printf("VOWELS: %d\n", vowels);
    printf("CONSONANTS: %d\n", consonants);
    
    fclose(ptr);

    return 0;
}