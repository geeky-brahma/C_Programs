#include <stdio.h>
int sum(int);

int main()
{
	int n,x;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	
	x=sum(n);
	printf("Sum of numbers upto %d = %d",n,x);
	printf("\n");
}

int sum(int x)
{
	int sum_;
	if (x==0)
	{
		return 0;
	}
	sum_=x+sum(x-1);
	return sum_;
}