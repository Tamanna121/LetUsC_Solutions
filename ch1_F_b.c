/*The lenght and breadth of a rectangle and radius of a circle are input through the keyboard . Write a program to calculate the area and perimeter of the rectangle and the area and circumference of the circle*/
#include <stdio.h>
int main()
{
    float b, l, r;
    printf("Enter the length and breadth of rectangle = ");
    scanf("%f %f", &l, &b);
    printf("enter the radius of circle = ");
    scanf("%f", &r);
    printf("The perimeter of rectangle : %f\n", (2 * (l + b)));
    printf("The area of rectangle = %f\n", (l * b));
    printf("The perimeter of circle = %f\n", 2 * 3.14 * r);
    printf("The area of a circle = %f\n", 3.14 * r * r);

    return 0;
}