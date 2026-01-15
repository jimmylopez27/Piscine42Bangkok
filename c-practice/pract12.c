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

	for (int i = 0; i < n; i ++)
	{	
		int count = 0;
		int num = arrnum[i];
		
		for (int j = 1; j < n; j ++)

			if (num == arrnum[j])
			{
				count++;
			}
			else
			{
				continue;
			}

		if (count == 0)
		{
			printf("The uniqu number is %d ", num);
		}

	}

	
	return 0;
}


