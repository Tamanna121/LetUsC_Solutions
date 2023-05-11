/*The distance betwen two cities (In km ) is input through the keyboard write the program to convert and print this distance in meters , feets, inches, centimeters*/
#include<stdio.h>
int main()
{
    float m,cm,inch,ft,km;
    printf("Enter the distance of two cities : ");
    scanf("%f",&km);

    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;

    printf("distance in meter : %f\n",m);
    printf("distance in centimeter : %f\n",cm);
    printf("distance in inches : %f\n",inch);
    printf("distance in feets : %f",ft);

    return 0;
}