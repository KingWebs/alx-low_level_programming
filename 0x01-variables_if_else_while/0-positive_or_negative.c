#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return Always 0(Success)
 */
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The number %d ", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{ printf("is negative\n");
}
return (0);
}
