/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include<stdio.h>
#include<string.h>

enum Gender{MALE, FEMALE, OTHER};

struct person{
  enum Gender gender;  
};

int main(){
    struct person p;

    char input[32];
    printf("Gender = ");
    scanf("%s", input);

    if(strcmp(input, "MALE") == 0){
        p.gender = MALE;
    }
    else if(strcmp(input, "FEMALE") == 0){
        p.gender = FEMALE;
    }
    else{
        p.gender = OTHER;
    }

    switch(p.gender){
        case MALE : printf("MALE\n"); break;
        case FEMALE : printf("FEMALE\n"); break;
        case OTHER : printf("OTHER\n"); break;
    }
    return 0;
}