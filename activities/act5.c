#include <stdio.h>
#include <stdlib.h>

#define BUFF 20

int main()
{

	char strTemp[BUFF];
	printf("Type your word here: ");
	scanf("%c", strTemp);

	int count = 0;
	int i = 0;
	while (strTemp[i] != '\0')
	{
		count++;
		i++;
	}

	printf("Count is %d\n", count);

	return 0;

}
