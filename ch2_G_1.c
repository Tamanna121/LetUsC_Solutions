/*If a five digit number is input through the keyboard write a program to calculate the sum of its digits.*/
#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, num, sum;
    printf("Enter the five digit number : ");
    scanf("%d", &num);
    n5 = num % 10;
    num = num / 10;
    n4 = num % 10;
    num = num / 10;
    n3 = num % 10;
    num = num / 10;
    n2 = num % 10;
    num = num / 10;
    n1 = num % 10;
    num = num / 10;
    sum = n5 + n4 + n3 + n2 + n1;
    printf("The sum of five digit number is : %d", sum);
    return 0;
}