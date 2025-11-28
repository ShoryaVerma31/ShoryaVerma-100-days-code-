/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include<stdio.h>
#include<string.h>

int main(){
    char s[70], t[70];
    int freq[26] = {0};

    printf("Enter string s: ");
    scanf("%s", s);

    printf("Enter string t: ");
    scanf("%s", t);

    // length should be same if not then, they are not Anagram 
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }


    for (int i = 0; s[i] != '\0'; i++){
        freq[s[i] - 'a']++; // increases frequense in s
    }

    for (int i = 0; t[i] != '\0'; i++){
        freq[t[i] - 'a']--; //decreases frequence in t
    }

    
    for (int i = 0; i < 26; i++){
        
        if (freq[i] != 0) {   // in last if frequence become zero "Anagram" otherwise "Not Anagram"
            printf("Not Anagram");

            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
