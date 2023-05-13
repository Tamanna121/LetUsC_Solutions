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

    printf("the Dearness allowance :%f\n",da);
    printf("the House Rent allowance :%f\n ",hra);
    printf("the gross salary is :%f ",gs);
    return 0;
}