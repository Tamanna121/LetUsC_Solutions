/*When interest compounds q times per year at an annual rate of r% for n years the principal p compound to an amount a as per the following formula
a=p(1+r/q)^nq
write a program to read 10 sets of p,r,n,q and calculate the corresponding as.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float q, r, n, p, a;
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("Set : %d\n", i);
        printf("interest compound : ");
        scanf("%f\n", &q);
        printf("Annual rate of interest : ");
        scanf("%f\n", &r);
        printf("No. of years : ");
        scanf("%f\n", &n);
        printf("the principal of compound : ");
        scanf("%f\n", &p);
        a = p * pow((1 + r / q), (n * q));
        printf("The amount of interest : %f", a);
    }
    return 0;
}