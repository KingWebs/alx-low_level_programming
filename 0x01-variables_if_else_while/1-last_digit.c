#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;
srand (time(0));
n = rand() - RAND_MAX / 2;
if ((n  %  10) > 5)
{
printf("Last digit of %d is %d and greater than 5\n", n, n  %  10);
}
else if ((n%10)<6&&(n%10)!=10)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, n  %  10);
}
else
{
printf("Last digit of %d and is 0\n", n, n  %  10);
}
return (0);
}
