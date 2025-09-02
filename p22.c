#include<stdio.h>

//22.Calculate net sales where net sales = gross sales – 10% discount of gross sales.
int main()
{
    float gross_sales, discount, net_sales;
    printf("Enter the gross sales: ");
    scanf("%f",&gross_sales);
    discount = 0.10 * gross_sales;
    net_sales = gross_sales - discount;
    printf("The net sales is: %.2f\n", net_sales);
    return 0;
}
