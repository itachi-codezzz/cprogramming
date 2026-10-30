#include <stdio.h>
int main()
{
    int units;
    float bill;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    if (units < 0)
    {
        printf("Units cannot be negative.\n");
        return 0;
    }
    if (units <= 50)
        bill = units * 1.50f;
    else if (units <= 150)
        bill = 50 * 1.50f + (units - 50) * 2.50f;
    else if (units <= 250)
        bill = 50 * 1.50f + 100 * 2.50f + (units - 150) * 4.00f;
    else
        bill = 50 * 1.50f + 100 * 2.50f + 100 * 4.00f + (units - 250) * 6.00f;
    bill = bill + 100.0f;
    printf("Electricity bill = Rs. %f\n", bill);
    return 0;
}
