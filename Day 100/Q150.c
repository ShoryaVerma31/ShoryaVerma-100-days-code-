/*Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h> 
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(){
    
    struct Student s1;
    struct Student *s = &s1;

    
    printf("Enter the name of student: ");
    fgets(s->name, sizeof(s->name), stdin);

    s->name[strcspn(s->name, "\n")] = '\0'; // remove new line 

    printf("Enter the roll number of the student: ");
    scanf("%d", &s->roll_no);

    printf("Enter the marks: ");
    scanf("%d", &s->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d", s->name, s->roll_no, s->marks);

    return 0;

}