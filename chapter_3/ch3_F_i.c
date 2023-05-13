/*According to gregorian calendar it was monday on the date 01/01/01. if any year is input through the keyboard write a program to find out what is the day on 1st january of this year*/
#include <stdio.h>
int main()
{
    int yr, lpyr, dys;
    printf("Enter the year = ");
    scanf("%d", &yr);
    yr = yr - 1;
    dys = yr * 365;
    lpyr = (yr / 4) + (yr / 400) - (yr / 100);
    dys = dys + lpyr;
    dys = dys % 7;
    if (dys == 0)
        printf("monday");
    if (dys == 1)
        printf("tuesday");
    if (dys == 2)
        printf("wednesday");
    if (dys == 3)
        printf("thursday");
    if (dys == 4)
        printf("friday");
    if (dys == 5)
        printf("saturday");
    if (dys == 6)
        printf("sunday");

    return 0;
}