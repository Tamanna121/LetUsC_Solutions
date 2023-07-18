/*Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following
29*1=29
29*2=58*/
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",i,num,i*num);
    }
    return 0;
}