/*Paper of size a0 has dimention 1189mm*841mm .Each subsequence size a(n) is defined as A(n-1) cut in half parallel to its shorter sides.  Thus paper of size a1 would have dimention 841mm x 594mm write a program to calculate and print paper sizes a0,a1,a3....a8*/

#include <stdio.h>
int main()
{
    int a0_a, a0_b, a1_a, a1_b, a2_a, a2_b, a3_a, a3_b, a4_a, a4_b, a5_a, a5_b, a6_a, a6_b, a7_a, a7_b, a8_a, a8_b;
    a0_a = 1189;
    a0_b = 841;
    printf("A0 : %dmm X %dmm \n", a0_a, a0_b);
    a1_a = a0_b;
    a1_b = a0_a / 2;
    printf("A1: %dmm X %dmm \n", a1_a, a1_b);
    a2_a = a1_b;
    a2_b = a1_a / 2;
    printf("A2 : %dmm X %dmm\n ", a2_a, a2_b);
    a3_a = a2_b;
    a3_b = a2_a / 2;
    printf("A3 : %dmm X %dmm\n ", a3_a, a3_b);
    a4_a = a3_b;
    a4_b = a3_a / 2;
    printf("A4 : %dmm X %dmm\n ", a4_a, a4_b);
    a5_a = a4_b;
    a5_b = a4_a / 2;
    printf("A5 : %dmm X %dmm\n ", a5_a, a5_b);
    a6_a = a5_b;
    a6_b = a5_a / 2;
    printf("A6 : %dmm X %dmm\n ", a6_a, a6_b);
    a7_a = a6_b;
    a7_b = a6_a / 2;
    printf("A7 : %dmm X %dmm \n", a7_a, a7_b);
    a8_a = a7_b;
    a8_b = a7_a / 2;
    printf("A8 : %dmm X %dmm ", a8_a, a8_b);

    return 0;
}