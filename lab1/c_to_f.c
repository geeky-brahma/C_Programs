#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter Temperatur in Celcius: ");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("%f degree Celcius = %f degree Farhenheit",c,f);
    return 0;
}