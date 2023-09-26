#include "main.h"
/**
 * print_last_digit - this prints the last digit
 * @n: The numbers to get the last digit
 * Return: 0
 */
int print_last_digit(int n)
{
	int number = n % 10;

	if (number < 0)
		number *= -1;
	_putchar(number + '0');
	return (number);
}
