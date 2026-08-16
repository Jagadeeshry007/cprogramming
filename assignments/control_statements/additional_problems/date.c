#include <stdio.h>

int main()
{
    int d, m, y, maxDays;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &y);

    if (y < 1850 || y > 2050)
    {
        printf("Invalid year");
    }
    else if (m < 1 || m > 12)
    {
        printf("Invalid month");
    }
    else
    {
        if (m == 2)
        {
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                maxDays = 29;
            else
                maxDays = 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            maxDays = 30;
        }
        else
        {
            maxDays = 31;
        }

        if (d >= 1 && d <= maxDays)
            printf("It's a valid date\n");
        else
            printf("It's not a valid date\n");
    }

    return 0;
}