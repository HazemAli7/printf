#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1 is returned
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: The string to print
 * Return: The number of characters printed
 */
int print_string(char *str)
{
    int i = 0;

    if (str == NULL)
        str = "(null)";
    
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }

    return (i);
}

