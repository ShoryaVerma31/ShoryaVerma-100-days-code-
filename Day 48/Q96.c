/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>

void reverse(char *start, char *end){
    while(start < end){
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
    char str[200];

    fgets(str,sizeof(str),stdin);

    int len = strlen(str);

    if(str[len-1] == '\n'){
        str[len-1] = '\0';           // removing new lines
    }
    
    char *start_from = str;
    char *ptr = str;

    while(1){
        if(*ptr == ' ' || *ptr == '\0'){
            reverse(start_from, ptr-1);

            if(*ptr == '\0'){
                break;
            }
            start_from = ptr + 1;
        }
        ptr++;
    }

    printf("%s", str);

    return 0;
}