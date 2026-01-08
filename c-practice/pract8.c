#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("Type how many numbers you want to enter: ");
 scanf("%d", &n);

 int *pmem;
 pmem = malloc(n * sizeof(int));

 if (pmem == NULL)
 {
  printf("Memory allocation FAILED!");
  return 1;
 }

 int arraynum[*pmem];
 printf("List the numbers below: \n");
 for (int i = 0; i < n; i ++)
 {
  printf("Number %d: ", i+1);
  scanf("%d", &arraynum[i]);
 }

 int num = arraynum[0];
 for (int i = 1; i < n; i ++)
 {
  if (arraynum[i] > num)
  {
   num = arraynum[i];
  }
 }

 printf("The largest is %d", num);
 free(pmem);

 return 0;
}
