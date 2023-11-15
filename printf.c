#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string with optional specifiers
 *
 * Return: Number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...) {
const char *ptr;
int count = 0;  /* Move the declaration to the beginning */

va_list args;
va_start(args, format);

ptr = format;

while (*ptr) {
if (*ptr == '%') {
ptr++;
switch (*ptr) {
case 'c': {
int c = va_arg(args, int);
putchar(c);
count++;
break;
}
case 's': {
char *s = va_arg(args, char *);
while (*s) {
putchar(*s++);
count++;
}
break;
}
case '%': {
putchar('%');
count++;
break;
}
}
} else {
putchar(*ptr);
count++;
}
ptr++;
}

va_end(args);
return (count);
}
