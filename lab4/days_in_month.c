#include <stdio.h>
int main()
{
    int month;
    printf("1. Jan\n2. Feb\n3. Mar\n4. Apr\n5. May\n6. Jun\n7. Jul\n8. Aug\n9. Sep\n10. Oct\n11. Nov\n12. Dec\nEnter Ur Choice: ");
    scanf("%d",&month);
    switch (month)
    {
        case 1 :
            printf("Number of days in Jan is 31",month);
            break;
        case 2 :
            printf("Number of days in Feb is 28",month);
            break;
        case 3 :
            printf("Number of days in Mar is 31",month);
            break;
        case 4 :
            printf("Number of days in Apr is 30",month);
            break;
        case 5 :
            printf("Number of days in May is 31",month);
            break;
        case 6 :
            printf("Number of days in Jun is 30",month);
            break;
        case 7 :
            printf("Number of days in Jul is 31",month);
            break;
        case 8 :
            printf("Number of days in Aug is 31",month);
            break;
        case 9 :
            printf("Number of days in Sep is 30",month);
            break;
        case 10 :
            printf("Number of days in Oct is 31",month);
            break;
        case 11 :
            printf("Number of days in Nov is 30",month);
            break;
        case 12 :
            printf("Number of days in Dec is 31",month);
            break;
        default:
        printf("Invalid Month");
            break;
    }
    return 0;
}