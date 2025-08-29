//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>

int main(){
    int a ,b,c,x1,x2;
    printf("Enter the value of a ,b ,c : ");
    scanf("%d %d %d",&a ,&b ,&c);

    //a(x*x)+ bx +c =0;
    x1 = (-b + sqrt((b*b) - (4*a*c)))/(2*a);
    x2 = (-b - sqrt((b*b) - (4*a*c)))/(2*a);
    
    if (((b*b) - (4*a*c)) > 0){
        printf("roots are real and distinct : %d %d",x1,x2);
    }
    else if (((b*b) - (4*a*c)) == 0){
        printf("roots are real and same : %d %d",x1,x2);
    }
    else {
        printf("roots are complex" );
    }
    return 0;
}