#include <stdio.h>
int main()
{
    float radius,perimeter;
    printf("Enter the Radius: ");
    scanf("%f",&radius);
    perimeter=2*3.14*radius;
    printf("Perimeter of circle with radius %f=%f",radius,perimeter);

    return 0;
}