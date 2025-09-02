#include<stdio.h>

// function to add,subtract,multiply and divide two numbers

int main()
{
    int a,b,sum,subtraction,multiplication,division;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    printf("Sum: %d\n",sum);
    printf("Subtraction: %d\n",subtraction);
    printf("Multiplication: %d\n",multiplication);
    printf("Division: %d\n",division);
    return 0;
}