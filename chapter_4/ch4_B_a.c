// A
// #include <stdio.h>
// int main()
// {
//     int i = 4, z = 12;
//     if (i = 5 || z > 50)
//         printf("Dean of student affairs\n");
//         else
//         printf("Dosa\n");
//         return 0;
// }
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