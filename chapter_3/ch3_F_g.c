/*Given the co ordinates (x,y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle on the circle or outside the circle */
#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2, pc, r;
    printf("Enter the center co ordinates of the circle = ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the Radius of a circle =  ");
    scanf("%d", &r);
    printf("Enter the point on a circle = ");
    scanf("%d %d", &x2, &y2);
    pc = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (pc > r)
        printf("The point lies outside the circle");
    if (pc < r)
        printf("The points lies inside the circle");
    if (pc == r)
        printf("The point lies in boundry of the circle");
         return 0;
}