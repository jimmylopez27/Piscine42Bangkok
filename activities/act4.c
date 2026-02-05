#include <stdio.h>
#include <stdlib.h>

int main()
{
	int strLen;
	printf("How long is the string you want? ");
	scanf("%d", &strLen);

	char *strWord = malloc((strLen +1 ) * sizeof(char));
	if (strWord == NULL) return 1;
	
	printf("Type your word here: ");
	for (int i = 0; i < strLen; i ++)
	{
		 scanf(" %c", &strWord[i]);
	}
	
	strWord[strLen] = '\0';
	
	printf("%s\n", strWord);
	free(strWord);

	return 0;

}
