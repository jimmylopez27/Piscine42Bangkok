#include <stdio.h>

#define MaxSize 20

int main()
{
	char buff[MaxSize];
	printf("Type the word here: ");
	fgets(buff, MaxSize, stdin);	

	int n = 0;	
	int len = 0;

	while(n < MaxSize)
	{
		if (buff[n] == '\0')
		{
			break;
		}
		
		len++;
		n++;	
	}

	printf("The length of the word is %d\n", len - 1);
	
	return 0;
	
}
