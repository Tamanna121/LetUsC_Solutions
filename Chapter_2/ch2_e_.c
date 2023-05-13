/*if length of three sides of a triangle are input through the keyboard , write a program to find the area of the triangle */
#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,sp,a;

    printf("Enter the three sides of triangle s1 s2 s3 : ");
    scanf("%f %f %f",&s1,&s2,&s3);

    sp=(s1+s2+s3)/2;
    a=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
     printf("The area of triangle = %f",a);
    return 0;
}