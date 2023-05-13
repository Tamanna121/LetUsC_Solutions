/*Write a program to find the absolute value of a number entered through the keyboard*/
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number = ");
    scanf("%d", &num);
    if (num < 0)
        printf("The number = %d", (-1 * num));
    else
        printf("The number = %d", num);
    return 0;
}