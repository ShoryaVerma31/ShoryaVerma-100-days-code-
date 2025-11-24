/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include<stdio.h>

struct student{
    char name[32];
    int roll_no;
    int marks;
};

struct student topper(struct student s[], int n){
    int topper_index =0;
    for (int i=1; i<n; i++){
        if(s[i].marks > s[topper_index].marks){
            topper_index = i;
        }
    }
    return s[topper_index];
}

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
    
    struct student top = topper(s,n);

    printf("Top Student: %s | Roll: %d | Marks:%d\n" ,top.name, top.roll_no, top.marks);

    return 0;
}    