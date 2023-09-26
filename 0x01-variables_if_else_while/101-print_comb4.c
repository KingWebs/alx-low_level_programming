#include <stdio.h>
int main(void)
{
for (int i = 0; i <= 9; i++)
{
for (int j = i + 1; j <= 9; j++)
{
for (int k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
