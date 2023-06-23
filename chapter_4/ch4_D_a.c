//if the side of a triangle are entered through the keyboard , write a program to check whether the triangle is isoceles , equilateral,scalene or right angled triangle.
#include<stdio.h>
int main()
{
    int s1,s2,s3,big;
    printf("Enter the three sides of triangle : ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3)
    printf("Equilateral triangle\n");
    if(s1==s2 || s1==s3 || s2==s3)
    printf("Isosceles triangle\n");
    if(s1!=s2 && s1!=s3 && s2!=s3)
    printf("scalene triangle\n");
    if((s1*s1 == s2*s2 + s3*s3) || (s2*s2 == s1*s1 + s3*s3) || (s3*s3 == s1*s1 + s2*s2))
    {
        printf("Right angle triangle");
    }
    else 
    printf("NOT right angle triangle");

    return 0;
}