#include <stdio.h>
int main()
{
    int num, *ptr;
    ptr=&num;
    printf("Enter a number: ");
    scanf("%d",ptr);
    printf("The number is: %d",*ptr);
    return 0;
}