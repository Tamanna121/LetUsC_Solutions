/*write a program to receive Cartesian co-ordinates (x,y) of a point and convert them into polar co-ordinates(r,0). if,r=sqrt(x*x+y*y) and 0=tan-1 (y/x)*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,thetha,r;
    printf("Enter the value of x,y = ");
    scanf("%f %f",&x,&y);
     r=sqrt(x*x+y*y);
     thetha = atan(y/x);
     thetha=thetha*3.14/180;
     printf("the polar co-ordinates (r,0) : %f %f",r,thetha);
    return 0;
}