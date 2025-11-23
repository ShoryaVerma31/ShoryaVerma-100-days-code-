/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>

enum Operation{SUCCESS, FAILURE, TIMEOUT};

int main(){
    
    char input[10];
    scanf("%s", input);

    enum Operation op;
    
    if(strcmp(input, "SUCCESS") == 0){
        op = SUCCESS;
    }
    else if(strcmp(input, "FAILURE") == 0){
        op = FAILURE;
    }
    else if(strcmp(input, "TIMEOUT") == 0){
        op = TIMEOUT;
    }
    else{
        printf("Invalid input\n");
        return 0;
    }
    

    switch(op){
        case SUCCESS : printf("Operation successful!!\n"); break;
        case FAILURE : printf("Operation failed\n"); break;
        case TIMEOUT : printf("SORRY! timout\n"); break;
    }
    return 0;
}