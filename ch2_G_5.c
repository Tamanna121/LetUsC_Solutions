/*If the value of an angle is input through the keyboard , write a program to print all its trigonometric ratios*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,r;
    printf("Enter the angle = ");
    scanf("%f",&r);
    r=r*180/3.14;
    // a=sin(r);
    // b=cos(r);
    // c=tan(r);
    // d=1/sin(r);
    // e=1/cos(r);
    // f=1/tan(r);
    // printf("The value of sin0 , cos0, tan0, cosec0, sec0, cot0 = %f %f %f %f %f %f",a,b,c,d,e,f);
    printf("sin =  %f\n",sin(r));
    printf("cos =  %f\n",cos(r));
    printf("tan =  %f\n",tan(r));
    printf("cosec =  %f\n",1/sin(r));
    printf("sec =  %f\n",1/cos(r));
    printf("cot =  %f\n",1/tan(r));
    return 0;
}