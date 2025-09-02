#include<stdio.h>

//10.Convert dollars into pound where 1 $ = 48 Rs. And 1 pound = 70 Rs.

int main()
{
    float dollars, pounds, rupees;
    printf("Enter amount in dollars: ");
    scanf("%f",&dollars);
    rupees = dollars * 48;
    pounds = rupees / 70;
    printf("%.2f dollars is equal to %.2f pounds\n", dollars, pounds);
    return 0;
}
