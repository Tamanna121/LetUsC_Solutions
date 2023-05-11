/*Temperature of a city in fahrenheit degrees in input through the keyboard . Write a program to convert this temperature into centigrade degrees */
#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f", &f);
    c = (f - 32) * 100 / 180;
    printf("temperature in centigrade : %f", c);
    return 0;
}