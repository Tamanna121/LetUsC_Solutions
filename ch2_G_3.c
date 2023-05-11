/*write a program to recieve values of latitude(L1,L2) and longitude (G1,G2), in degrees of two places on the earth and output the distance (D) between them in nautical miles . The formula for distance in nautical miles is : D=3963*cos-1(sinL1sinL2+cosL1cosL2*cos(G2-G1))*/
#include <stdio.h>
#include <math.h>
int main()
{
    float L1, L2, G1, G2, D;
    printf("Enter the value of L1,L2,G1,G2 : ");
    scanf("%f %f %f %f", &L1, &L2, &G1, &G2);
    L1 = L1 * 180 / 3.14;
    L2 = L2 * 180 / 3.14;
    G1 = G1 * 180 / 3.14;
    G2 = G2 * 180 / 3.14;
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));
    printf("The distance of nautical miles = %f",D);
    return 0;
}