#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("How many number you want to enter? ");
 scanf("%d", &n);

 int *pmem;
 pmem = malloc(n * sizeof(int));

 int arraynum[*pmem];

 if (pmem == NULL)
 {
  printf("The allocation FAILED!");
  return 1;
 }
 
 printf("\nType your number below:\n");
 
 for (int i = 0; i < n; i ++ )
 {
  printf("Number %d: ", i + 1);
  scanf("%d", &arraynum[i]);
 }
 
 int sum = 0;
 for (int i = 0; i < n; i ++)
 {
  sum += arraynum[i]; 
 }
 
 printf("The sum of the numbers is: %d\n", sum);
 printf("The average of the nunbers is: %d", sum / n);
 
 printf("\n\n"); 

 free(pmem);

 return 0;
 
}
