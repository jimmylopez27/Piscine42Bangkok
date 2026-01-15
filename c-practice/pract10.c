#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}	


int main()
{
	int pa, pb;
	printf("Type your numbers\n");
	printf("x: ");
	scanf("%d", &pa);
	printf("y: ");
	scanf("%d", &pb);

	printf("Original arrangment is: x = %d, y = %d\n", pa, pb);
	swap(&pa, &pb);
	printf("New arrangement is : x = %d, y = %d\n", pa, pb);

	return 0;	
}
