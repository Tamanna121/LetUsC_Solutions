#include <stdio.h>
int main()
{
    int i, n = 1;
    printf("\nPrime number between 1 to 300 are : \n\t");
    for (n = 1; n <= 300; n++)
    {
        i = 2;
        for (i= 2; i < n; i++)
        {
            if (n % i == 0)
                break;
        }
        if (i == n)
            printf("%d\t", n);
    }
    return 0;
}