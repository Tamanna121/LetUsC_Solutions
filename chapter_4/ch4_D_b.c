/*In digital worls colors are specified in Red-Green_blue (RGB) format,with value of R,G,B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format,with values of C,M,Y,K varing on a real scale from 0.0 to 1.0 write a program that converts RGB color to CMYK color */
#include <stdio.h>
int main()
{
    float r, g, b, w, c, m, y, k, max;
    printf("Enter the color value for Red,Green,blue : ");
    scanf("%f %f %f", &r, &g, &b);
    max = ((r > g && r > b) ? r : (g > r && g > b ? g : b));
    if (r == 0 && g == 0 && b == 0)
    {
        c=0;
        m=0;
        y=0;
        k=1;
        printf("cyan = %f \nmagenta = %f \nyellow = %f \nblack =%f\n",c,m,y,k);
    }
    else
    {
        w = max / 255;
        c = (w - (r / 255)) / w;
        m = (w - (g / 255)) / w;
        y = (w - (b / 255)) / w;
        k = 1 - w;
        printf("\nThe value of CMYK = %f %f %f %f", c, m, y, k);
    }
    return 0;
}
