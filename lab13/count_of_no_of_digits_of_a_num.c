#include <stdio.h>
int count(int);
int main()
{
    int n,x;
    printf("Enter The number: ");
    scanf("%d",&n);

    x=count(n);
    printf("%d",x);
    return 0;
}

int count(int a)
{
    int count_;
    if (a==0)
    {
        return 0;
    }
    count_=1+count(a/10);
    return count_;
}