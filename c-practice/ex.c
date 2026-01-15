#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Type your n: " );
	scanf("%d", &n);
	
	int *p = malloc(n * sizeof(int));
	printf("The *p is %d\n", *p);
	printf("The address of where the memory is stored is %p\n", p); 

	p[0] = 7;
	p[1] = 9;
	p[2] = 10;
	printf("The *p is %d\n", *p);
	printf("The p[1] is %d\n", p[1]);
	printf("The p[2] is %d\n", p[2]);

	printf("The address of p[0] is %p\n", &p[0]);
	printf("The address of p[1] is %p\n", &p[1]);
	printf("The address of p[2] is %p\n", &p[2]);
	

	return 0;
}
