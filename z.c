#include<stdio.h>
int main()
{
    float units,bill;
    printf("enter units consumed:");
    scanf("%f", &units);
    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = 100 * 1.50 + (units - 100)* 2.5;
    else if (units <= 300)
        bill = 100 * 1.50 + 1  00 * 2.50 + (units - 200) * 4.00;
    else
        bill = 100 * 1.50 +100 * 2.50 + 100 *4.00 + (units - 300) * 6.00;
    printf("electricity bill = rs. %.2f\n" , bill);
    return 0;
}
