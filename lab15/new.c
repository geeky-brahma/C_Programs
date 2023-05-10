#include<stdio.h>
int main()
{
	int i,n,a,u,v;
	int x,upp=0,low=0;
	printf("enter the length of string \n");
	scanf("%d",&n);
	char str[n];
	printf("enter the string\n");
	scanf("%d",&a);
	scanf("%[^\n]s",str);
	for(i=0; str[i] != '\0';i++)
	{
		x=str[i];
        if( x >='a' && x<='z')
        {
        	u=x-32;
        	printf("%c",u);
        	low++;
		}
		else 
		{
			v=x+32;
			printf("%c",v);
			upp++;
        }
		
		
	}
	printf("\nnumber of lower letter is %d \n",low);
		printf("number of upper letter is %d \n",upp);
}