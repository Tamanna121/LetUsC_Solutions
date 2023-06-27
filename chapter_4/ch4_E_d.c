/*write a program to receive value of an angle in degree and check whether sum of square of sine and cosine of this angle is equal to 1*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, s, c,sum;
    printf("Enter the angle : ");
    scanf("%f", &a);
    a = a * (3.14 / 180);
    s = sin(a);
    c = 1 / sin(a);
    ((s*s)+(c*c)==1)?printf("true"):printf("false");
    return 0;
}