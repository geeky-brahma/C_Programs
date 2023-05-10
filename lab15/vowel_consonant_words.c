#include <stdio.h>
int main()
{
	char input[200];
    printf("Enter a String: ");
	scanf("%[^\n]",input);
	int vowel=0, con=0, word=0;
	for (int i=0; input[i]!='\0'; i++)
	{
		if (input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u'||input[i]=='A'||input[i]=='E'||input[i]=='I'||input[i]=='O'||input[i]=='U')
		{
			vowel++;
			printf("Vowel: %c\n",input[i]);
		}
		else if(input[i]==' ')
		{
			word++;
		}
		else
		{
			con++;
			printf("Consonant: %c\n",input[i]);
		}
	}
	word++;
	
	printf("No. of Vowels: %d\n",vowel);
	printf("No. of Consonants: %d\n",con);
	printf("No. of Words: %d\n",word);
	
}