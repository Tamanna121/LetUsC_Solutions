/*Given three points (x1,y1),(x2,y2)and (x3,y3), write a program to check if all the three points fall on one straight line*/
#include <stdio.h>
#include <math.h>
int main()
{
    float ab, bc, ac, abc, x1, x2, x3, y1, y2, y3;
    printf("Enter the X1 and y1 coordinates = ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the X2 and y2 coordinates = ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the X3 and y3 coordinates = ");
    scanf("%f %f", &x3, &y3);
    ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    printf("ab : %f\n  bc : %f\n  ac : %f\n", ab, bc, ac);
    abc = ab + bc;
    if (abc == ac)
        printf("The co ordintes lines in straight line");
    else
        printf("They are not in straight line");

    return 0;
}