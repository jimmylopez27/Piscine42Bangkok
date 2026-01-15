#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Type how many numbers you want: ");
	scanf("%d", &n);

	int *arrnum = malloc(n * sizeof(int));
	
	if (arrnum == NULL)
	{
		printf("Memory allocation FAILED!");
		return 1;
	}

	printf("Type your numbers below\n");
	for (int i = 0; i < n; i ++)
	{
		printf("Number %d: ", i);
		scanf("%d", &arrnum[i]);
	}

	for (int i = 0; i < (n-1)/2; i ++)
	{
		printf("n = %d\n", n);
		int temp = arrnum[i];
		printf("Temp = %d", temp);

		arrnum[i] = arrnum[(n-1)-i];
		printf("\narrnum[i] = %d", arrnum[i]);
		
		arrnum[(n-1)-i] = temp;
		printf("\narrnum[n-i] = %d\n", arrnum[(n-1)-i]);
	}	

	printf("The array of numbers is: ");
	for (int i = 0; i < n; i ++)
	{
		printf("%d", arrnum[i]);
	}
	
	printf("\n");
	free(arrnum);

	return 0;
}
