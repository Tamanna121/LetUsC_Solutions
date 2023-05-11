/*Wind chill factor is the felt air temperature on exposed skin due to wind . The wind chill temperature is always lower than the air temperature and is calculated as per the following formula : wcf=35.74+0.6215+(0.4275t-35.75)*v^0.16*/
#include <stdio.h>
#include <math.h>
int main()
{
    float t, v, wcf;
    printf("Enter the temperture and velocity = ");
    scanf("%f %f", &t, &v);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("The wind chill factor = %f", wcf);
    return 0;
}