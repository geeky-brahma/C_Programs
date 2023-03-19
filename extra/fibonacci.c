#include <stdio.h>
int main()
{
    int a,b,c,i,n;
    a=0;b=1;
    
    printf("Enter the Number of terms: ");
    scanf("%d",&n);
    printf("%d,%d,",a,b);
    for(i=1;i<n-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d,",b);
    }
    return 0;
}