#include "main.h"
/**
 * _strlen - return the lenhth of a string
 * @s: char too check
 * Description: this will return the length of a string
 * Return: 0 is succes
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
