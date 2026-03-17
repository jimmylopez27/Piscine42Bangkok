#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;

	printf("How many letters you want?: ");
	scanf("%d", &num);
	getchar();

	char *str = malloc((num + 1) * sizeof(char));


	printf("Type your word here: ");
	fgets(str, num + 1, stdin);

	printf("Here is your word: %s\n", str);

	free(str);
	return 0;
}

