/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include<stdio.h>

struct Employee{
    char name[32];
    int id;
    float salary;
};

int main(){
    struct Employee emp, empread;
    FILE *fp;

    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.data" , "wb");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee details stroed in file successfully!\n");

    fp = fopen("employee.data", "rb");
    if(fp == NULL){
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&empread, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n-------Data Read from file------\n");
    printf("Name: %s", &empread.name);
    printf("ID: %d\n", empread.id);
    printf("Salary: %.2f\n", empread.salary);

    return 0;
}