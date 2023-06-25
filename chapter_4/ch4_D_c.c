/*A certain grade of steel is graded according to the following condition : (i)hardness must be greater than 50 (ii)carbon content must be less than 0.7 (iii)Tensil strength must be greater than 5600*/
#include <stdio.h>
int main()
{
    float h, c, t;
    printf("The hardness of steel : ");
    scanf("%f", &h);
    printf("Carbon content in a steel : ");
    scanf("%f", &c);
    printf("tensile strength of a steel : ");
    scanf("%f", &t);
    if (h > 50 && c < 0.7 && t > 5600)
        printf("10 grade");
    else if (h > 50 && c < 0.7 && !(t > 5600))
        printf("9 grade");
    else if (!(h > 50) && c < 0.7 && t > 5600)
        printf("8 grade");
    else if (h > 50 && !(c < 0.7) && t > 5600)
        printf("7 grade");
    else if (h > 50 || c < 0.7 || t > 5600)
        printf("6 grade");
    else if(!(h > 50) && !(c < 0.7) && !(t > 5600))
        printf("5 grade");
    return 0;
}