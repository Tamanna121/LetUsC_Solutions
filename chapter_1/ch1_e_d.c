/*if the marks is obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student . Assume that the maximum marks that can be obtained by a student in each subject is 100*/
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, aggr, per;

    printf("Enter the Markss of five subjects : ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    aggr = m1 + m2 + m3 + m4 + m5;
    per = aggr / 500 * 100;

    printf("The aggregate marks : %f\n", aggr);
    printf("The percentage : %f", per);
    return 0;
}