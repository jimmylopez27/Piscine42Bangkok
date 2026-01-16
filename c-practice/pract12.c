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
		int count = 1;
		test = arrnum[i];

		for (int j = 0; j < n; j ++)	
		{
			if (test == arrnum[j])
			{
				count++;
				printf("Test num is %d and the arrnum[%d] is %d\n", test, j, arrnum[j]);
			}
			else
			{
				count = 1;
			}
		}
	}

	
	return 0;
}


