#include<stdio.h>

// Convert dollars into Rs. Where 1 $ = 48 Rs.

int main()
{
    float dollars, rupees;
    printf("Enter amount in dollars: ");
    scanf("%f",&dollars);
    rupees = dollars * 48;
    printf("%.2f dollars is equal to %.2f Rs\n", dollars, rupees);
    return 0;
}
