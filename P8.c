#include <stdio.h>
int main()
{
    int number, original, temp, digit;
    int count = 0, sum = 0, reverse = 0;
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
        digit = temp % 10;
        count++;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }
    printf("Number of digits = %d\n", count);
    printf("Sum of digits = %d\n", sum);
    printf("Reversed number = %d\n", reverse);
    if (original == reverse)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
