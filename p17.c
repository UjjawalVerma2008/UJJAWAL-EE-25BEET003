#include<stdio.h>

// 17.Calculate area & perimeter of a square. A = L^2, P = 4L

int main()
{
    float side, area, perimeter;
    printf("Enter the length of a side of the square: ");
    scanf("%f",&side);
    area = side * side;
    perimeter = 4 * side;
    printf("The area of the square is: %.2f\n", area);
    printf("The perimeter of the square is: %.2f\n", perimeter);
    return 0;
}
