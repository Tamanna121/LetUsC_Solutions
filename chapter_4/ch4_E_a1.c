//A) using conditional operators determine:
//(1) whether the character entered through the keyboard is a lower case alphaet or not
// #include<stdio.h>
// int main()
// {
//     char a;
//     printf("enter the character : ");
//     scanf("%c",&a);
//     if(a>=65 && a<=90)
//         printf("the upper case");
//             else
//                 printf("lower case");

//     return 0;
// }
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    (a>=65 && a<=90 ? printf("upper case"):printf("lower case"));
    return 0;
}