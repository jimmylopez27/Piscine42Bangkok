#include <stdio.h>
#include <stdlib.h>

#define max_len 100
#define N 3

int main()
{

	char buffer[max_len];
	char arr[N];

	int j, len;		
	
	for (int i = 0; i < N; i ++)
	{
		arr[i] = malloc(N * sizeof(char));
	} 

	printf("Type the word below: ");
	for (int i = 0; i < N; i ++)
	{

		j = 0;
		len = 0;		

		printf("Word %d: ", i);
		fgets(buffer, max_len, stdin);		

		while (buffer[j] != '\0')
		{
			j++;
			len++;
		}
	
		*arr[i] = malloc(len + 1);			

		for (int m = 0; m < len; m ++ )
		{
			arr[i][j] = buffer[j];
		}		

		printf("The word is: %c", arr[i]);
		
		free(arr);
	}

	return 0;
}
