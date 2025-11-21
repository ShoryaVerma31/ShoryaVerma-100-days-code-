/*Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, 
and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include<stdio.h>

int main(){
    FILE *ptr;
    char name[32];
    int age;
    ptr = fopen("info.txt" , "w");

    printf("Enter your name\n");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age\n");
    scanf("%d", &age);

    // content to be shown inside the file (info.txt)

    fprintf(ptr,"Name: %s",name);
    fprintf(ptr,"%c",'\n');
    fprintf(ptr,"Age: %d",age);
    fprintf(ptr,"%c",'\n');

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}