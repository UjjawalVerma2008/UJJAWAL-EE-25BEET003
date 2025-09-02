#include<stdio.h>

//Convert minutes into hours.

int main()
{
    int minutes, hours;
    printf("Enter minutes: ");
    scanf("%d",&minutes);
    hours = minutes / 60;
    printf("%d minutes is equal to %d hours\n", minutes, hours);
    return 0;
}