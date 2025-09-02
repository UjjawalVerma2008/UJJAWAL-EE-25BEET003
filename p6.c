#include<stdio.h>

// Convert hours into minutes.
int main()
{
    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d",&hours);
    minutes = hours * 60;
    printf("%d hours is equal to %d minutes\n", hours, minutes);
    return 0;
}