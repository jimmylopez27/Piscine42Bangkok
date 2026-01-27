#include <stdio.h>

int main()
{
	int n;
	printf("Type your number here: ");
	scanf("%d", &n);	

	int newnum = n;
	int len = 0;
	while (newnum != 0)
	{
		newnum = n / 10;
		n = newnum;
		len++;
	}

	printf("Length is:  %d\n", len);

	return 0;
}
