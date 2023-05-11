/*The first program to calculate simple interest for a set of values representing principal,number of years and rate of interest */

#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    p=1000;
    n=3;
    r=8.5;
    si=p*n*r/100;
    printf("%f\n",si);
    return 0;
}