#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; 
	int count = 0;
	printf("How long is the string your want?: ");
	scanf("%d", &n);
	
	char *str = malloc((n + 1) * sizeof(char));
	printf("Type your word here: ");
	
	while(count < n)
	{
		fgets( str, n, stdin);
		count++;
		str++;
	}
	
	*str+= '\0';

	printf("This is your word %s", str);
	return 0;
}
