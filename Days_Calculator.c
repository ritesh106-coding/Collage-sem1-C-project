//Q9.  Write a program to input a year and a month number, then print how many days are in that 
//month, considering leap year logic. 


//31 day Month=>1,3,5,7,8,10,12
//30 day Month=>4,6,9,11
//29 and 28 day=>2
#include<stdio.h>
int main()
{
    int month, year;
   printf("Enter year: ");
	  scanf("%d", &year);
	printf("Enter month number (1-12): ");
	scanf("%d", &month);

    if(month < 1 || month > 12)	//it show entre value is unvalide or not if unvalide it will run
    {
        printf("Invalid: Enter the correct Month (1-12)");
        return 1;
    }

    int days;
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;

        case 4: case 6: case 9: case 11:
            days = 30;
            break;

        case 2:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
            break;
    }

    printf("Year %d, Month %d has %d days.\n", year, month, days);
    return 0;
}