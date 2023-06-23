// A
#include <stdio.h>
int main()
{
    int i = 4, z = 12;
    if (i = 5 || z > 50)
        printf("Dean of student affairs\n");
        else
        printf("Dosa\n");
        return 0;
}
// Ans - "Dean of student affairs".....

// B
#include <stdio.h>
int main()
{
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;
    printf("w=%d x=%d y=%d z=%d\n", w, x, y, z);
    return 0;
}
// Ans - w=1,x=0,y=1,z=1

// C
#include <stdio.h>
int main()
{
    int x = 20, y = 40, z = 45;
    if (x > y && x > z)
        printf("biggest x = %d\n", x);
    else if (y > x && y > z)
        printf("biggest y = %d\n", y);
    else if (z > x && z > y)
        printf("biggest z = %d", z);
    return 0;
}
// Ans - biggest z = 45

// D
#include <stdio.h>
int main()
{
    int i = -4, j, num;
    j = (num < 0 ? 0 : num * num);
    printf("%d\n",num);
    printf("%d\n",j);
    return 0;
}
// Ans - num = 1642531536
//       j= 601155840

//E
#include<stdio.h>
int main()
{
    int k ,num=30;
    k=(num>5?(num<=10?100:200):500);
    printf("%d\n",k);
    return 0;
}
//Ans - 200