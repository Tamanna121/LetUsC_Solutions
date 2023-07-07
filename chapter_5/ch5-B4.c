/*Write a program to enter number till the user wants. At the end it should display the count of positive , negative and zero entered*/
#include <stdio.h>
int main()
{
    int n,num,pos=0,neg=0,zero=0;
    printf("Enter the number you want : ");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("Enter the number = ");
        scanf("%d",&num);
        if(num>0)
        pos++;
        if(num<0)
        neg++;
        if(num==0)
        zero++;
        n--;
    }
    printf("Total positive = %d \n total negetive = %d \n total zeros = %d \n",pos,neg,zero);
    return 0;
}