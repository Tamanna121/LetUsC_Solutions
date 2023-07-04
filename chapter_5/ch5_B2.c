#include <stdio.h>
int main()
{
    int j=1, k, i=1, count=0;
    while (i <= 30000)
    {
        count = 0;
        while (j * j * j <= i)
        {
            k=j;
            while ( j * j * j + k * k * k <= i)
            {
                if (j * j * j + k * k * k == i)
                {
                    count++;
                }
                k++;
            }
            j++;
        }
        i++;
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}