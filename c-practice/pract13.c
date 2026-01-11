#include <stdio.h>

int main()
{
 
 int select;
 printf("\nMenu\n a. Calculator - type \"1\"\n b. Exit - type \"2\"\nSelect: ");
 scanf("%d", &select);
 
 while(select == 1)
 {
  int opt;
  printf("\nType the operation\n a. Add - type \"1\"\n b. Multiply - type \"2\"\n c. Exit Calculator - type \"3\"\nSelect: ");
  scanf("%d", &opt);

  switch (opt)
   {
    int a, b;
    case 1: 
	printf("\nType your first number: ");
	scanf("%d", &a);
	printf("Type your second number: ");
	scanf("%d", &b);
 	printf("\nThe sum of %d and %d is %d\n\n", a, b, a + b);
	break;
    case 2:
	printf("\nType your first number: ");
	scanf("%d", &a);
	printf("Type your second number: ");
	scanf("%d", &b);
 	printf("\nThe product of %d and %d is %d\n\n", a, b, a * b);
 	break;
    case 3:
   	select = 2;
	break;
   }
 }
 
 printf("\nExiting the calculator...\n\n");
 
 return 0; 
}
