#include <stdio.h>

#define BUFF 20

int main()
{
	char str[BUFF];
	printf("Type your word here: ");
	fgets(str, BUFF, stdin);

	int count = 0;
	for (int i = 0; i < BUFF; i ++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'  )
		{
			count ++;
		}
		else if (str[i] == '\0')
		{
			break;
		}
	}

	printf("The number of vowels on the word %s is %d\n", str, count);

	return 0;
}
