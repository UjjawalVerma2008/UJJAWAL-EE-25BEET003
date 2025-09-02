#include<stdio.h>

//Convert Rs. into dollars where 1 $ = 48 Rs.

int main()
{
    float dollars, rupees;
    printf("Enter amount in Rs: ");
    scanf("%f",&rupees);
    dollars = rupees / 48;
    printf("%.2f Rs is equal to %.2f dollars\n", rupees, dollars);
    return 0;
}