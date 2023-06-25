/*whether a character entered through the keyboard is a special symbol or not*/
#include <stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
        scanf("%c", &a);
    (a>0 && a<47 || a>58 && a<64 || a>91 && a<96 || a>123 && a<127)?printf("special symbol"):printf("non special symbol");
     return 0;
}