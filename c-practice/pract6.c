#include <stdio.h>

int main()
{
    int n;
    printf("Type your number here: ");
    scanf("%d", &n);

    int isPrime = 1;      // FIX 1: initialize
    int done = 0;         // FIX 2: control while loop

    while (!done)         // FIX 3: valid condition
    {
        if (n <= 1)       // FIX 4: 1 is NOT prime
        {
            isPrime = 0;
            break;
        }

        if (n == 2)       // FIX 5: handle 2 correctly
        {
            isPrime = 1;
            break;
        }

        for (int i = 3; i * i <= n; i += 2)   // FIX 6: correct loop
        {
            int num = n % i;

            if (num == 0)
            {
                isPrime = 0;
                break;    // FIX 7: break only if divisor found
            }
        }

        done = 1;         // FIX 8: prevent infinite loop
    }

    if (isPrime == 1)
    {
        printf("The number %d is a PRIME NUMBER\n", n);
    }
    else
    {
        printf("The number %d is NOT a PRIME NUMBER\n", n);
    }

    return 0;
}

