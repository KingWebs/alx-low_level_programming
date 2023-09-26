#include <stdio.h>
int main(void)
{
for (int i = 0; i < 100; i++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
if (i != 99)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
