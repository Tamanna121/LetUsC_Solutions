/*if a five digit number is input through the keyboard , write a program to reverse the number*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,num,num2;

    printf("Enter the five digit number : ");
    scanf("%d",&num);
    n5=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n1=num;

    num2=n5*10000+n4*1000+n3*100+n2*10+n1;
        printf("The reverse five digit number is : %d",num2);

    return 0;
}