/* write a program using conditional operator to determine whether a year entered through the keyboard is leap or not*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) ? printf("leap year") : printf("non leap year");
    return 0;
}