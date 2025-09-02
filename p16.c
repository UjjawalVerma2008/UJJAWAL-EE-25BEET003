#include<stdio.h>


// Calculate interest where I = PRN/100.
int main()
{
    float principal, rate, time, interest;
    printf("Enter principal amount: ");
    scanf("%f",&principal);
    printf("Enter rate of interest: ");
    scanf("%f",&rate);
    printf("Enter time in years: ");
    scanf("%f",&time);
    interest = (principal * rate * time) / 100;
    printf("The interest is: %.2f\n", interest);
    return 0;
}