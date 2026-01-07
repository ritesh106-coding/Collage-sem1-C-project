//Q7. Write a program to input a date (day, month, year) and check whether the date is valid or 
//invalid
#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter the Date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    if (year > 0) {
        if (month >= 1 && month <= 12) {
            if (day >= 1) {
                if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
                    if (day <= 31)
                        printf("The date %02d-%02d-%04d is VALID.\n", day, month, year);
                    else
                        printf("INVALID: Day exceeds 31 for this month.\n");
                } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                    if (day <= 30)
                        printf("The date %02d-%02d-%04d is VALID.\n", day, month, year);
                    else
                        printf("INVALID: Day exceeds 30 for this month.\n");
                } else if (month == 2) {
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                        if (day <= 29)
                            printf("The date %02d-%02d-%04d is VALID (Leap Year).\n", day, month, year);
                        else
                            printf("INVALID: February has only 29 days in a leap year.\n");
                    } else {
                        if (day <= 28)
                            printf("The date %02d-%02d-%04d is VALID.\n", day, month, year);
                        else
                            printf("INVALID: February has only 28 days in a non-leap year.\n");
                    }
                }
            } else {
                printf("INVALID: Day must be >= 1.\n");
            }
        } else {
            printf("INVALID: Month must be between 1 and 12.\n");
        }
    } else {
        printf("INVALID: Year must be positive.\n");
    }

    return 0;
}