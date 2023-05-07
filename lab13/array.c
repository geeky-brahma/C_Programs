#include <stdio.h>

void PrintArray(int a[], int , int );
int main()
{
    int a[5]={1,2,3,4,5};
    PrintArray(a,10,0);
    return 0;
}

void PrintArray(int a[], int n, int start)
{
    if (start>=n)
    {
        return;
    }
    printf("%d ",a[start]);
    PrintArray(a,n,start+1);
}