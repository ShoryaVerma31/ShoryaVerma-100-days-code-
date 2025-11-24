/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include<stdio.h>

struct student{
    char name[32];
    int roll_no;
    int marks;
};

int main(){
    struct student s[5];

    for (int i=0; i<5; i++){
        printf("Enter the details of Student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%d", &s[i].marks); 
    }
    
    printf("%-15s %-10s %-10s\n" , "Name", "Roll" , "Marks");
    for (int i=0; i<5; i++){
        printf("%-15s %-10d %-10d\n" , s[i].name, s[i].roll_no , s[i].marks);
    }
}        