/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include<stdio.h>

struct student{
    char name[32];
    int roll_no;
    int marks;
};

void print(struct student s){
    printf("Name: %s | Roll: %d | Marks:%d\n" , s.name, s.roll_no, s.marks);
}

int main(){
    
    struct student s;

    printf("Enter the Student details:\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll: ");
    scanf("%d", &s.roll_no);
    printf("Marks: ");
    scanf("%d", &s.marks);

    print(s); // pass the structure to the function (print)
    
}        