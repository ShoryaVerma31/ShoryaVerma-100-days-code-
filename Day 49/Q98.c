/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char name[50];

    fgets(name,sizeof(name),stdin);
    
    int len = strlen(name);
    if(name[len-1] == '\n'){
        name[len-1] = '\0';           // removing new lines
    }
    
    char *ptr = name;
    char *surname = 0; 


    if(*ptr != '\0'){
        printf("%c.",*ptr);
    }

    
    while(*ptr != '\0'){ 
        if(*ptr == ' ' && *(ptr+1) != '\0'){

            if(strchr(ptr+1 , ' ') == NULL){  //No more spaces --> This is the last name
                surname = ptr+1;
            }
            else{
            printf("%c." ,*(ptr+1));
            } 
        }
        ptr++;
    }
    printf(" %s" , surname);
    
    return 0;
}