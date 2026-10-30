#include <stdio.h>
int main()
{
    int marks[5], i, total = 0, failed = 0;
    float percentage;
    printf("Enter marks in five subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks.\n");
            return 0;
        }
        total = total + marks[i];
        if (marks[i] < 35)
            failed = 1;
    }
    percentage = total / 5.0f;
    printf("Total = %d\n", total);
    printf("Percentage = %f\n", percentage);
    if (failed == 1)
        printf("Result = Fail\n");
    else if (percentage >= 75)
        printf("Result = Distinction\n");
    else if (percentage >= 60)
        printf("Result = First Class\n");
    else if (percentage >= 50)
        printf("Result = Second Class\n");
    else

        printf("Result = Pass Class\n");
    return 0;
}
