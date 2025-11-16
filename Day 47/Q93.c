/*Q93: Check if two strings are anagrams of each other.(An anagram is a word or phrase formed by rearranging the letters
    
of another word or phrase, using all original letters exactly once.)

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str1[100] , str2[100];
    int freq[256] = {0};
      
    scanf("%s", str1);
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)){
        printf("Not anagrams");
        return 0;
    }

    for(int i=0; str1[i] != '\0'; i++){
        freq[(unsigned char)tolower(str1[i])]++; // unsigned char? -> to take value 0 to 256 .
    }

    for(int i=0; str2[i] != '\0'; i++){
        freq[(unsigned char)tolower(str2[i])]--;
    }

    for(int i=0; i<256; i++){
        if (freq[i] != 0){
           printf("Not anagrams"); 
           return 0; 
        } 
    }

    printf("Anagrams");
    return 0;
}