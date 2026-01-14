#include <stdio.h>

int main()
{
	int n;
	printf("Type your number here: ");
	scanf("%d", &n);

	printf("The reverse of %d is ", n);
	if (n == 0)
	{
		printf("0");
	}
	
	int m, y;
	while (n > 0)
	{
			m = n % 10;
			y = n / 10;
			n = y;
			printf("%d", m);
	}	
	
	printf("\n");	
	return 0;
}
