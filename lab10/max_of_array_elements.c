// max number

#include <stdio.h>
int main()
{
	int a[5]={25,20,30,52,12};
	int max=a[0];
	for(int i=0; i<5; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("Max Num=%d\n",max);
}