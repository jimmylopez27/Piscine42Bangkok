#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("How many numbers you want?: ");
	scanf("%d", &n);		
	
	int *pmem = malloc(n*sizeof(int));
	if (pmem == NULL)
	{
		printf("Memory Allocation FAILED!");
		return 1;
	}

	printf("Type your numbers\n");
	for (int i = 0; i < n; i ++)
	{
		printf("Type the number %d: ", i+1);
		scanf("%d", &pmem[i]);
	}
	
	printf("The sum of the numbers is: ");
	int sum = 0;
	for (int i = 0; i < n; i ++)
	{
		sum += pmem[i];
	}

	printf("%d", sum);	

	free(pmem);

	return 0;
}
