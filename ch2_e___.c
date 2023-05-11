/*consider  CURRENCY  system in which there are notes of seven denominator , namely , Rs.1 ,Rs.2 ,Rs.5 ,Rs.10 ,Rs.50; Rs.100. if a sum of Rs.N is Entered through the keyboard write a program to compute the smallest number of notes that will combine to given Rs.N */
#include<stdio.h>
int main()
{
    int amt ,one ,two,five,ten,fifty,hun,total;
    printf("enter the sum of Rs.N : ");
    scanf("%d",&amt);

    hun=amt/100;
    amt=amt%100;
    fifty=amt/50;
    amt=amt%50;
    ten=amt/10;
    amt=amt%10;
    five=amt/5;
    amt=amt%5;
    two=amt/2;
    amt=amt%2;
    one=amt/1;
    amt=amt%1;

    total=hun+fifty+ten+five+two+one;
    printf("The smallest number of note = %d",total);

    return 0;
}