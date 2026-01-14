#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n; 
	printf("How many numbers you want?: ");
	scanf("%d", &n);	

	int *pmem;
	pmem = malloc(n * sizeof(n));

	if (pmem == NULL)
	{
		printf("Memory allocation FAILED!");
		return 1;
	} 

	int arrnum[*pmem];
	for (int i = 0; i < n; i ++)	
	{
		printf("Type the number %d here: ", i+1);
		scanf("%d", &arrnum[i]);
	}

	int sum = 0;
	for (int i = 0; i < n; i ++)
	{
		sum += arrnum[i];
	}	

	float avg = sum / n;
	printf("The sum of the numbers is: %d\n", sum);
	printf("The average of the numbers is: %.2f\n",avg);

	return 0;
}
