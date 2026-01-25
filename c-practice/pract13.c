#include <stdio.h>

int main()
{

		int a, b, c, d, bill = 0;
		char order;
	
		while (order != 'Y'  && order != 'N')	
		{
			printf("Do you want to order? Y or N: ");
			scanf(" %c", &order);
		}		

		switch (order)
		{	
				case 'Y':
						bill = 1;
						printf("Menu: \n");
						printf("a = Burger: $45ึ\nb = Hotdog: $30\nc = Coke: $12\nd = Water: $5\n");
			
						printf("How many Burgers you want?: ");
						scanf("%d", &a);
						printf("How many Hotdogs you want?: ");
						scanf("%d", &b);
						printf("How many Coke you want?: ");
						scanf("%d", &c);
						printf("How many Water you want?: ");
						scanf("%d", &d);
						break;
						
				case 'N':
					printf("Exiting Order. See you next time! Thank you...");
					break; 
		}

		if (bill == 1)
		{
			printf("This is your bill \n");
			if (a != 0)
			{
				printf("Buger:$%d\n", a*45);
			}
			if (b != 0)
			{
				printf("Hotdog:$%d\n", b*30);
			}
			if (c != 0)
			{
				printf("Coke:$%d\n", c*12);
			}
			if (a != 0)
			{
				printf("Water:$%d\n", d*5);
			}	
			printf("The total of your bill is %d\n", a*45 + b * 30 + c*12 + d*5);
		}		

	return 0;
}
