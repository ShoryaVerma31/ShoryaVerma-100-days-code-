//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>

int main(){
    int length,breadth;

    printf("Enter length\n");
    scanf("%d",&length);
    
    printf("Enter breadth\n");
    scanf("%d",&breadth);

    printf("The area of this rectangle is %d\n", length*breadth);
    printf("The perimeter of this rectangle is %d\n", 2*(length+breadth));

    return 0;
}