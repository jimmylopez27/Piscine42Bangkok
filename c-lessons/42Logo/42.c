#include <unistd.h>
#include <stdio.h>

#define WIDTH 208
#define HEIGHT 51


int main()
{
	int ht = 0; 
	int wt = 0;

	while(ht <= HEIGHT)
	{
		wt = 0;		

		if(ht == 2)
		{
			while(wt <= WIDTH)
			{
				if(wt >= (WIDTH/2 - 9) && wt <= (WIDTH/2 - 1))
				{
					printf(" ");
					wt++;
				}
				else
				{
					printf("#");
					wt++;
				}
			}
			ht++;
		}
	
		wt = 0;		

		if(ht == 3)
		{
			while(wt <= WIDTH)
			{
				if(wt >= (WIDTH/2 - 11) && wt <= (WIDTH/2 - 3))
				{
					printf(" ");
					wt++;
				}
				else
				{
					printf("#");
					wt++;
				}
			}
			ht++;
			wt = 0;
		}		
		else
		{
			printf("#");
		}
		printf("\n");
		ht++;
	}



	return 0;
}


