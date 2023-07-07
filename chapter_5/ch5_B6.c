/*Write a program to find the range of a set of number entered through the keyboard Range is the difference between smallest and biggest number in the list*/
#include <stdio.h>
int main()
{
    int n, num, s, b,diff;
    printf("\nEnter the number of sets: ");
    scanf("%d", &n);
    printf("\nEnter the number : ");
    scanf("%d", &num);
    b = num;
    s = num;
    while (n > 1)
    {
        printf("\nEnter the number : ");
        scanf("%d", &num);
        if (num>b)
        {
            b=num;
        }
        if(num<s)
        {
            s=num;
        }
        n--;
    }
        printf("\nthe bigger and smaller number is : %d %d",b,s);
        diff=b-s;
        printf("\ndifference between bigger and smaller number = %d",diff);

    return 0;
}

