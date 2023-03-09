#include <stdio.h>
int main()
{
    // int i,n,sum;
    float i,n,sum,avg;
    printf("Enter the total numbers: ");
    scanf("%f",&n);
    for (i=1; i <= n; i++)
    {
        sum+=i;
    }
    // printf("%f",sum);
    avg=sum/n;
    printf("Avg of %f numbers = %f", n, avg);
    
    return 0;
}