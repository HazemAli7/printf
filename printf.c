#include "main.h"

/**
 * _printf - A function that mimics printf function
 * @format: The format string containing the characters and the specifiers
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0, count = 0;
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
            case 'c':
                count += _putchar(va_arg(args, int));
                break;
            case 's':
                count += print_string(va_arg(args, char *));
                break;
            case '%':
                count += _putchar('%');
                break;
            default:
                count += _putchar('%');
                count += _putchar(format[i]);
            }
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return (count);
}

