#include<stdio.h>

//24.Swap two values.
int main()
{
    float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a: %.2f\n", a);
    printf("After swapping, value of b: %.2f\n", b);
    return 0;
}
