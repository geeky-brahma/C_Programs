// Min num

#include <stdio.h>
int main()
{
	int a[5]={25,20,30,52,12};
	int min=a[0];
	for(int i=0; i<5; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("Min Num=%d\n",min);
}