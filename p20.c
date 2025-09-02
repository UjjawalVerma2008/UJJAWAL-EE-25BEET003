#include<stdio.h>

//20.Calculate area of a triangle. A = H*L/2
int main()
{
    float height, base, area;
    printf("Enter the height of the triangle: ");
    scanf("%f",&height);
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    area = (height * base) / 2;
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}

