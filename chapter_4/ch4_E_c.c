/*Write a program to find the greatest of the three number entered through the keyboard use conditional operator*/
#include <stdio.h>
int main()
{
    int a, b, c, g;
    printf("Enter the three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    g = ((a > b && a > c) ? a : (b > a && b > c) ? b: c);
    printf("The greater number is %d", g);
    return 0;
}