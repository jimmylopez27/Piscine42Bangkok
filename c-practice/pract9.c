#include <stdio.h>

void swap(int *a, int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}


int main()
{
 
 int x, y;
 printf("Type your x number: ");
 scanf("%d", &x);
 printf("Type your y number: ");
 scanf("%d", &y);
 
 printf("\nNumber x: %d\n", x);
 printf("NUmber y: %d\n\n", y);

 swap(&x, &y);
 printf("swap order\n");
 printf("x = %d\n", x);
 printf("y = %d\n\n", y);
 
 return 0;

}
