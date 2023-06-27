/*Two number are entered through the keyboard Write a program to find the value of one number raised to the power of another*/
#include <stdio.h>
int main()
{
    float x, power;
    int y, i;
    printf("\nEnter two number : ");
    scanf("%f %d", &x, &y);
    power = i = 1;
    while (i <= y)
    {
        power = power * x;
        i++;
    }
    printf("%f of the power %d is %f\n", x, y, power);
    return 0;
}