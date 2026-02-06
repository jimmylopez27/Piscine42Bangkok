#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

int main()
{
	char strTemp[BUFF];
	printf("Type your word here: ");
	fgets(strTemp, BUFF, stdin);

	int count = -1;
	for (int i = 0; i < BUFF; i ++)
	{
		if (strTemp[i] == '\0')
		{
			break;
		}
		count++;
	}

	printf("The reverese of the word %s: ", strTemp);
	for (int i  = count; i >= 0; i--)
	{
		printf("%c", strTemp[i]);
	}	

	printf("\n");	

	return 0;

}
