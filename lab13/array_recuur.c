#include <stdio.h>
int getArray(int a[], int, int);
int main()
{
    int n=5;
    int A[5]={1,2,3,4,5};
    getArray(A,0,n-1);
    return 0;
}

int getArray(int a[], int n, int start)
{
    if (start==0)
    {
        return a[start];
    }
    printf("%d ",getArray(a,n,start+1));
    return a[start];
}