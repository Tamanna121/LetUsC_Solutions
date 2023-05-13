#include<stdio.h>
int main()
{
 int yr;
 printf("Enter the year : ");
 scanf("%d",&yr);

 if(yr%100==0)
 {
    if(yr%400==0)
    printf("leap year");
    else
    printf("non leap year");
 }
 else
 {
    if(yr%4==0)
    printf("leap year");
    else
    printf("non leap year");
 }
    return 0;
}
