#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; 
	int count = 0;
	printf("How long is the string your want?: ");
	scanf("%d", &n);
	getchar();
	
	char *str = malloc((n + 1) * sizeof(char));
	printf("Type your word here: ");

	if (str == NULL) return 1;		
	
	fgets(str, n + 1, stdin);

	printf("\nThis is your word %s\n", str);
	free(str);
	return 0;
}
