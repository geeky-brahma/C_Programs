#include <stdio.h>
int main()
{
    int row, col,k;
    row=4;
    col=5;
    k=1;
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}