#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int printf_int(va_list args);
int printf_dec(va_list args);

#endif /* MAIN_H */

