#include <stdio.h>
#include <stdlib.h>

int main()
{
int n = 0;
printf("Type how many you want to add: ");
scanf("%d", &n);

int *pnum;
pnum = malloc(n * sizeof(int)); 


int num[*pnum];

for (int i = 0; i < n; i ++ )
{
 printf("Type your number %d: ",i + 1);
 scanf("%d", &num[i]);
}

int sum = 0;

for (int i = 0; i < n; i ++ )
{
 sum += num[i]; 
}

printf("The sum of the %d numbers is: %d \n", n, sum);

free(pnum);

return 0;
}
