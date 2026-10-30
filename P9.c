#include <stdio.h>
int main()
{
    int number, original, temp, digit;
    int digits = 0, i, power, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    original = number;
    temp = number;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        for (i = 1; i <= digits; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    return 0;
}
