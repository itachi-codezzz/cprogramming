#include <stdio.h>
int main()
{
    int number, lower, upper, i, n, flag;
    printf("Enter an integer to check: ");
    scanf("%d", &number);
    flag = 1;
    if (number < 2)
        flag = 0;
    else
    {
        for (i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    if (lower > upper)
    {
        int temp = lower;
        lower = upper;
        upper = temp;
    }
    printf("Prime numbers in the range are:\n");
    for (n = lower; n <= upper; n++)
    {

        flag = 1;
        if (n < 2)
            flag = 0;
        else
        {
            for (i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}
