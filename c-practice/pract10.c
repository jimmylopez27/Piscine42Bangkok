#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("How many numbers? ");
 scanf("%d", &n);

 int *pmem;
 pmem = malloc(n * sizeof(int));
 
 if (pmem == NULL)
 {
  printf("Memory allocation FAILED!");
  return 1;
 }

 int arrnum[*pmem];

 for (int i = 0; i < n; i ++)
 {
  printf("Type your number %d : ", i);
  scanf("%d", &arrnum[i]);
 }
 
 for (int i = 0; i < n/2; i ++)
 {
  int temp;
  arrnum[i] = arrnum[n - 1 - i];
  arrnum[n - 1 - i] = temp; 
 }
 
 printf("The new array is: ");
 for (int i = 0; i < n; i ++)
 {
  printf("%d", arrnum[i]);
 }
 
 printf("\n\n");
 free(pmem);
 
 return 0;
}
