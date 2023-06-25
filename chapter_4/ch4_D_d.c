/*The body mass index (BMI) is defined as ratio of the weight of a person in kilogram to the square of the height in meters . write a program that recieves weight and height calculates the BMI and reports the BMI category as per the following tables(shown in book)*/
#include <stdio.h>
int main()
{
    float w, h, bmi;
    printf("Enter the weight and height : ");
    scanf("%f %f", &w, &h);
    bmi = w / (h * h);
    if (bmi < 15)
        printf("Starvation");
    else if (bmi > 15.1 && bmi < 17.5)
        printf("Anorexic");
    else if (bmi > 17.6 && bmi < 18.5)
        printf("Under weight");
    else if (bmi > 18.6 && bmi < 24.9)
        printf("Ideal");
    else if (bmi > 25 && bmi < 25.9)
        printf("Overweight");
    else if (bmi > 30 && bmi < 30.9)
        printf("obese");
    else if (bmi >= 40)
        printf("morbidly obese");
    return 0;
}