#include <stdio.h>

void  swap(int *m, int *n)
{
	int temp = *m;
	*m = *n;
	*n = temp;

}

int main()
{
	
	int numA = 6;
	int numB = 3;

	printf("The original numbers: numA = %d, numB = %d\n", numA, numB);

	swap(&numA, &numB);

	printf("The new position: numA = %d, numB = %d\n", numA, numB);

	return 0;	

}
