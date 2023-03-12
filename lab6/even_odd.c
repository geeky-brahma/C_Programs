#include <stdio.h>
int main()
{
    int i;
    printf("Enter The Number: ");
    scanf("%d",&i);
    i%2==0?printf("Even"):printf("Odd");
    return 0;
}