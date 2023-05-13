/*if Ages of Ram , Shyam, Ajay are input through the keyboard , write a program to determine the youngest of the three*/
#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter the age of Ram : ");
    scanf("%d",&ram);
    printf("Enter the Age of Shyam : ");
    scanf("%d",&shyam);
    printf("Enter the Age of Ajay : ");
    scanf("%d",&ajay);

    if(ram<shyam  && ram<ajay )
        printf("Ram is Youngest");

    if(shyam<ram && shyam<ajay)
        printf("shyam is youngest");
    
    if(ajay<ram && ajay<shyam)
        printf("Ajay is youngest");
    return 0;
}