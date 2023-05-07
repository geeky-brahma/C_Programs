#include <stdio.h>
int sum(int);

int main()
{
	int n,x;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	x=sum(n);
	printf("Sum of digits of number %d = %d",n,x);
	printf("\n");
}

int sum(int x)
{
	int sum_;
	if (x==0)
	{
		return 0;
	}
	sum_=x%10+sum(x/10);
	return sum_;
}

