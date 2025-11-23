/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and 
display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("student_record.txt" , "w");
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    char name[n][50];
    int roll[n], marks[n]; 

    for(int i =0; i < n; i++){
        printf("Enter the details of Student %d", i+1);
        printf("\nName: ");
        scanf("%s", name[i]);
        printf("Roll: ");
        scanf("%d", &roll[i]);
        printf("Marks: ");
        scanf("%d", &marks[i]);

        fprintf(ptr, "%s %d %d\n", name[i], roll[i], marks[i]);
    }

    fclose(ptr);
    
    ptr = fopen("student_record.txt" , "r");

    printf("\n--------STUDENT RECORDS--------\n");

    char rname[50];
    int rroll, rmarks;

    while(fscanf(ptr, "%s %d %d" ,rname, &rroll, &rmarks) == 3){
        printf("Name: %s | Roll: %d | Marks: %d\n", rname, rroll, rmarks);
    }

    fclose(ptr);

    return 0;
}