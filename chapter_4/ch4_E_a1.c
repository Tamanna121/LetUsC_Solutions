//A) using conditional operators determine:
//(1) whether the character entered through the keyboard is a lower case alphaet or not
#include<stdio.h>
int main()
{
    char a;
    printf("enter the character : ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
        printf("the lower case");
            else
                printf("not lower case");

    return 0;
}