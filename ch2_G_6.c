/*Two numbers are input through the keyboard into two locations C and D . Write a program to interchhange the content of C and D*/
#include<stdio.h>
int main()
{
    float C,D;
    printf("Enter the value of locations C and D : ");
    scanf("%f %f",&C,&D);
    C=C+D;
    D=C-D;
    C=C-D;
    printf("the interchange value of C &D = %f %f",C,D);
    printf("the interchange value of C &D = %f %f",C,D);
    return 0;
}