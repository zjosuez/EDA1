
#include <stdio.h>
#include <stdlib.h>

long int array[81];
long int fibonacci(int n)
{

    if ((n <= 2) && array[n] == NULL)
    {
        array[n] = 1;
    }

    else if (array[n] == NULL)
    {
        array[n] = fibonacci(n - 2) + fibonacci(n - 1);
    }

    return array[n];
}