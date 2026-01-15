#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("How many numbers you want to encode?: ");
	scanf("%d", &n);

	int *pmem;
	pmem = malloc(n * sizeof(int));
	if(pmem == NULL)
	{
		printf("The memory allocation FAILED!");
		return 1;
	}

	printf("Type your numbers below:\n");
	int arrnum[*pmem];
	for (int i = 0; i < n; i ++)
	{
		printf("Number %d: ", i + 1);
		scanf("%d", &arrnum[i]);
	}	

	int largenum = arrnum[0];
	int smallnum = arrnum[0];
	for (int i = 1; i < n; i ++)
	{
		if(arrnum[i] > largenum)
		{
			largenum = arrnum[i];
		}
		
		if(arrnum[i] < smallnum)
		{
			smallnum = arrnum[i];
		}
	}

	printf("The largest number is %d\n", largenum);
	printf("The smallest number is %d\n", smallnum);	

	return 0;
}
