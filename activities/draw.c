#include <stdio.h>

void draw(int w, int h)
{
	int w1 = w;	
	int h1 = h;	
	int n = 0;

	printf("\n");	
	while (h1 != 0)
	{
		n = 0 ;
		while (n <= w1)
		{
			printf("%c", '-');
			n++;
		}
		printf("\n");	
		h1--;
	}

	printf("\n");
}


int main()
{
	int width;
	int height;
	
	printf("Width: ");
	scanf("%d", &width);
	printf("Height: ");
	scanf("%d", &height);
	
	draw(width, height);

	return 0;
}

