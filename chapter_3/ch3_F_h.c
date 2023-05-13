/*given point (x,y), write a program to find out if it lies on the x axis ,y axis or on the origin.*/
#include <stdio.h>
int main()
{
    int x1, y1;
    printf("Enter the points = ");
    scanf("%d %d", &x1, &y1);
    if (x1 == 0 && y1 != 0)
        printf("The points lies on y-axis ");
    if (x1 != 0 && y1 == 0)
        printf("the point lies on x-axis");
    if (x1 == 0 && y1 == 0)
        printf("both lies in origin");
    return 0;
}