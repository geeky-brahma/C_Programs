#include <stdio.h>

int main() {
    int year, dayOfWeek;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the day of the week for January 1st of the given year
    // First calculate the number of days from 2001 to the given year
    int numDays = (year - 2001) * 365;
    if (year%4==0)
        {
            numDays += (year - 2001) / 4;

            if (year%400==0)
            {
                numDays += (year - 1601) / 400;
            }
            else if (year%100==0)
            {
                numDays -= (year - 1601) / 100;

            }
            
        }
    // Add in the number of leap years from 2001 to the given year
    
    // Adjust for any century years that are not leap years
    
    // Add in the number of leap years for each 400-year cycle
    

    // Calculate the day of the week (0 = Sunday, 1 = Monday, etc.)
    dayOfWeek = (numDays + 1) % 7;

    // Output the result
    printf("The first day of %d was ", year);
    switch (dayOfWeek) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }
    printf("\n");

    return 0;
}
