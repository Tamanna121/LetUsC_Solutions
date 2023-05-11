/*Ramesh basic salary is input through the keyboard . his dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary . write a program to calculate his gross salary*/

#include<stdio.h>
int main()
{
    float bs,da,hra,gs;

    printf("Enter the basic salary : ");
    scanf("%f",&bs);

    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;

    printf("the Dearness allowance :\n");
    printf("the House Rent allowance :\n ");
    printf("the gross salary is : ");
    return 0;
}