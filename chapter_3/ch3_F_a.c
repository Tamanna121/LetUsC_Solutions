/*A five digit number is entered through the keyboard write a program to obtain the reverse number and to determine whether the original and reverse number are equal or not */
#include<stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5,rev;

    printf("enter the five digit number : ");
    scanf("%d",&num);

    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n5=num;

    rev= n1*10000+n2*1000+n3*100+n4*10+n5;
    printf("The five digit reverse number :%d\n",rev);

    if(num==rev)
        printf("true");
        else
            printf("false");
    return 0;
}