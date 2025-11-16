/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main(){
    char sentence[200];
    char longest[50];
    char current[50];
    int curr_len = 0, long_len = 0;

    fgets(sentence, sizeof(sentence), stdin);
    
    for(int i=0; sentence[i] != '\0'; i++){
        if(sentence[i] != ' ' && sentence[i] != '\n'){
            current[curr_len++] = sentence[i];
        }
        else{
            current[curr_len] = '\0';

            if(curr_len > long_len){
                strcpy(longest,current);
                long_len = curr_len;
            }
            curr_len = 0; 
        }
    }
     
    if(curr_len > 0){
        current[curr_len] = '\0';
        if(curr_len > long_len){
            strcpy(longest,current);
        }
    }

    printf("Longest word: %s\n", longest);

    return 0; 
}