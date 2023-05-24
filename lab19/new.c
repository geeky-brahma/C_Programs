#include <stdio.h>
void in(int , int, int [][]);
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    in(m,n,a);
}
void in(int m, int n, int a[m][n])
{
    for (int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}