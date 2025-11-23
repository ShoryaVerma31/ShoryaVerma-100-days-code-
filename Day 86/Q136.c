/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
choice 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>

enum operation{ADD, SUBTRACT, MULTIPLY};

int main(){
    enum operation op;

    char choice[32];
    scanf("%s", &choice);

    int a, b;
    printf("Enter value of a and b: ");
    scanf("%d %d", &a, &b);
 
    if(strcmp(choice, "ADD") == 0){
        op = ADD;
    }
    else if(strcmp(choice, "SUBTRACT") == 0){
        op = SUBTRACT;
    }
    else if(strcmp(choice, "MULTIPLY") == 0){
        op = MULTIPLY;
    }
    else{
        printf("Invalid choice\n");
        return 0;
    }

    switch(op){
        case ADD: printf("%d\n", a+b); break;
        case SUBTRACT: printf("%d\n", a-b); break;
        case MULTIPLY: printf("%d\n", a*b); break;
    }

    return 0;
}
