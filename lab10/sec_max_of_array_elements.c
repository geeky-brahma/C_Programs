//Second max 


#include <stdio.h>
int main()
{
	int a[5]={25,20,30,52,12};
	int max=a[0];
	int second_max=a[0];
	for(int i=0; i<5; i++)
	{
		if(a[i]>max)
		{
			second_max=max;
			max=a[i];
			
		}
	}
	
	printf("2nd Max Num=%d\n",second_max);
}