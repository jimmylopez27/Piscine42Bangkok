#include <stdio.h>

int main()
{
	char num[] = {2, 4, 6};
	
	int count = 0;	
	while (num[count] != NULL )
	{
		if (num != NULL)
		{
			printf("Num: %d\n", num[count]);
			count++;
		}
	
	}
	return 0;
}
