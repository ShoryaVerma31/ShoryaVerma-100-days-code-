/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include<stdio.h>

struct student{
    char name[32];
    int roll_no;
    int marks;
};

int main(){
    int n ;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];

    for (int i=0; i<n; i++){
        printf("Enter the details of Student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%d", &s[i].marks); 
    }
    int topper_index = 0;
    for (int i=1; i<n; i++){
        if(s[i].marks > s[topper_index].marks){
            topper_index = i;
           
        }
    }
    printf("\nTopper: %s (Marks: %d)\n" , s[topper_index].name, s[topper_index].marks);
}        