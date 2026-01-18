#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Type how many numbers you want to input: ");
	scanf("%d", &n);

	int *arrnum = malloc(n * sizeof(int));
	
	if (arrnum == NULL)
	{
		printf("Memory Allocation FAILED!");
		return 1;
	}

	printf("Type your numbers below: \n");	
	for (int i = 0; i < n; i ++)
	{
		printf("Num %d: ", i+1);
		scanf("%d", &arrnum[i]);
	}	

	int test;
	for (int i = 0; i < n; i ++)
	{
		int count = 0;
		test = arrnum[i];

		for (int j = 0; j < n; j ++)	
		{
			if (test == arrnum[j])
			{
				count++;
			}
			else
			{
				count = 0;
			}
		}
		
		if (count == 1)
		{
			printf("The unique num is: %d", test);
		}
	}

	free(arrnum);	
	return 0;
}


