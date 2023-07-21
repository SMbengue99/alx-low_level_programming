#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
        int i = 1;

        if (n < 0)
        {
        _putchar('-');
        n = -n;
        }
        while (n / i >= 10)
        {
        i *= 10;
        }
        while (i > 0)
        {
        _putchar(n / i + '0');
        n %= i;
        i /= 10;
        }
}
