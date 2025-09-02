#include<stdio.h>

//19.Calculate area of a circle. A = 22/7 * R * R
int main()
{
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = (22.0/7.0) * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
