/*write a program to check whether a triangle is valid or not , if three angles of the triangle are entered through the keyboard . a triangle is valid if the sum of all three angles is equal to 180 degrees*/
#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("enter the angles a1 a2 and a3");
    scanf("%d %d %d",&a1,&a2,&a3);
    sum=a1+a2+a3;

    if(sum==180)
        printf("triangle is valid");
    else
        printf("triangle is invalid");    
    return 0;
}