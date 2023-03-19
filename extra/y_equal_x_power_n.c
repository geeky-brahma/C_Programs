#include <stdio.h>
int main()
{
    int x,y=1,n;
    printf("Equation: y=x^n\n");
    printf("Enter Value for x: ");
    scanf("%d",&x);
    // printf("Enter Value for y: ");
    // scanf("%d",&y);
    printf("Enter Value for n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        y*=x;
    }
    printf("y = %d",y);
    return 0;
}