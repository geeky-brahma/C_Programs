#include <stdio.h>
int main()
{
    int a[5], temp, c=4;
    int *p= &a[0];
    for (int i=0; i<5; i++)
    {
        scanf("%d",&*(a+i*c));
        // printf("%d\n",*(p+i*c));
    }
    printf(" ");
    // for (int i=0; i<5; i++)
    // {
    //     // scanf("%d",&*(p+i*c));
    //     printf("%d\n",a[i]);
    // }
    for (int i=0; i<5; i++)
    {
        // scanf("%d",&*(p+i*c));
        
        printf("%d, ",*(a+i*c));
    }
    return 0;
}