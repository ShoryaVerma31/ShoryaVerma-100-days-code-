/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>

int main(){
    
    char name[50];

    fgets(name,sizeof(name),stdin);
    
    char *ptr = name;

    if(*ptr != '\0'){
        printf("%c.",*ptr);
    }
    
    while(*ptr != '\0'){
        if(*ptr == ' ' && *(ptr+1) != '\0'){
            printf("%c." ,*(ptr+1)); 
        }
        ptr++;
    }    
    return 0;
}