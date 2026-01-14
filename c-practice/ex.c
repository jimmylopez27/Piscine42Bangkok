#include <stdio.h>

int main()
{
	int n;
	printf("Type your n: " );
	scanf("%d", &n);
 
	int m = n % 10;
	printf("The remainder is %d", m);
}
