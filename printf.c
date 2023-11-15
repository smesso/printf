#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string with optional specifiers
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);

int count = 0;
const char *ptr = format;

while (*ptr)
{
if (*ptr == '%' && ++ptr)
{
switch (*ptr++)
{
case 'c':
count += _putchar(va_arg(args, int));
break;
case 's':
{
char *s = va_arg(args, char *);
while (*s)
count += _putchar(*s++);
break;
}
case '%':
count += _putchar('%');
break;
}
}
else
{
count += _putchar(*ptr++);
}
}

va_end(args);
return (count);
}

