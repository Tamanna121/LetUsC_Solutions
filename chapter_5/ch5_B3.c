/*Write a program for a matchstick game being played between the computer and a user .Your program should ensure wins.Rules for game are as follow
. there are 21 matchsticks
. the computer asks the player to pick 1,2,3 or 4 matchsticks
. after the person picks the computer does its picking
. whoever is forced to pick uup the last matchstick loses the game*/
#include <stdio.h>
int main()
{
    int i = 21, a, b;
    while (i > 0)
    {
        printf("\nPick the matchstick = ");
        scanf("%d", &a);
        if (a > 4 || a < 0)
        {
            printf("\nplease pick the valid number");
        }
        else
        {
            i = i - a;
            printf("\nLeft matchsticks after you pick = %d",i);
            b = 5 - a;
            printf("\nmatchstick pick by computer = %d", b);
            i = i - b;
            printf("\nLeft matchsticks after computer pick = %d",i);
           if (i == 1)
        {
            printf("\n1 matchstick left :(");
            printf("\nyou lose the game.");
            break;
        }
        }
        
    }

    return 0;
}