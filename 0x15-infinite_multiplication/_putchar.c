#include "holberton.h"

/**
 * _putchar - writes a character to stdout
 * @c: character
 *
 * Return: 1 or -1
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
