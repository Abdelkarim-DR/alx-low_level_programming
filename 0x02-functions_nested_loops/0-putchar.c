#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *o = "Holberton\n";

	while (*o)
	{
		_putchar(*o);
		o++;
	}
	return (0);
}

