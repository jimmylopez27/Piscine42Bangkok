#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Type how many numbers you want to input: ");
	scanf("%d", &n);

	int *arrnum = malloc(n * sizeof(int));
	int *freq = malloc(n * sizeof(int));	
	
	if (arrnum == NULL || freq == NULL)
	{
		printf("Memory Allocation FAILED!");
		return 1;
	}

	printf("Type your numbers below: \n");	
	for (int i = 0; i < n; i ++)
	{
		printf("Num %d: ", i+1);
		scanf("%d", &arrnum[i]);
		freq[i] = 0;
	}

	for (int i = 0; i < n; i ++)
	{
		for (int j  = 0 ; j < n; j ++)	
		{
			if (arrnum[i] == arrnum[j])
			{
				freq[i]++;
			}
		}
	}
	
 	for (int i = 0; i < n; i ++)
	{
		if (freq[i] == 1)
		{
			printf("The unique number is %d\n", arrnum[i]);
		}
	}

	free(arrnum);
	free(freq);
		
	return 0;
}


