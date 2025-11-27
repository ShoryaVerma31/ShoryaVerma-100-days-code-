/*Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[32];
    int roll_no;
    int marks;
};

int main(){
    struct student* s = (struct student*)malloc(sizeof(struct student));

    if(s == NULL){
        printf("memory allocation falied!");
    }

    printf("Name: ");
    scanf("%s", s->name);
    printf("Roll: ");
    scanf("%d", &s->roll_no);
    printf("Marks: ");
    scanf("%d", &s->marks);
    
    printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll_no, s->marks);

    free(s);

    return 0;
}