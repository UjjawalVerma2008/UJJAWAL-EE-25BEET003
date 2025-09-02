#include<stdio.h>

//Convert Fahrenheit into celcius. C = 5/9 * (F – 32)

int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = (5.0/9.0) * (fahrenheit - 32);
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
    return 0;
}
