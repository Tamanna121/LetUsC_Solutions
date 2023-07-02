#include <stdio.h>
int main()
{
    int j, k, i, count;
    while (i = 1, i <= 3000)
    {
        count = 0;
        while (j = 1, j * j * j <= i)
        {
            while (k = 1, j * j * j + k * k * k <= i)
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
            printf("%d", i);
        }
    }
    return 0;
}