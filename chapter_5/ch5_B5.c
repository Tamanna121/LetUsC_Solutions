/*Write a program to receive an integer and find its octal number*/
#include <stdio.h>
#include <math.h>
int main()
{
    int oct = 0, r, n, i = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 8;
        n = n / 8;
        oct = oct + r * pow(10,i);
        i++;
    }
    printf("Octal numbers are : %d", oct);
    return 0;
}