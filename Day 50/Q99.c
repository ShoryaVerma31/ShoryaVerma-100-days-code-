/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include<stdio.h>

int main(){
    char date[12];
    int dd,mm,yyyy;

    fgets(date, sizeof(date),stdin);

    sscanf(date, "%2d/%2d/%4d" ,&dd, &mm, &yyyy); //sscanf --> extract the numbers. 

    char *month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
                       "Sep", "Oct", "Nov", "Dec"};
    
    printf("%02d-%s-%04d",dd,month[mm-1],yyyy);
    return 0;
}