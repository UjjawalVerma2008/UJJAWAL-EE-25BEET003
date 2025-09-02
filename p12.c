#include<stdio.h>

//Convert kgs into grams.
int main()
{
    float kgs, grams;
    printf("Enter weight in kgs: ");
    scanf("%f",&kgs);
    grams = kgs * 1000;
    printf("%.2f kgs is equal to %.2f grams\n", kgs, grams);
    return 0;
}

