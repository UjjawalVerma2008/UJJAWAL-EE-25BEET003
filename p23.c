#include<stdio.h>

//23.Calculate average of three subjects along with their total.

int main()
{
    float subject1, subject2, subject3, total, average;
    printf("Enter marks of subject 1: ");
    scanf("%f",&subject1);
    printf("Enter marks of subject 2: ");
    scanf("%f",&subject2);
    printf("Enter marks of subject 3: ");
    scanf("%f",&subject3);
    total = subject1 + subject2 + subject3;
    average = total / 3;
    printf("The total marks is: %.2f\n", total);
    printf("The average marks is: %.2f\n", average);
    return 0;
}
