#include <stdio.h>
#include <stdbool.h>
#include<stdio.h>
#include<stdarg.h>

void print_binary(unsigned int num) {
    if (num > 1)
        print_binary(num / 2);
    
    putchar('0' + (num % 2));
}

void _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;

            if (*format == 'b') {
                unsigned int num = va_arg(args, unsigned int);
                print_binary(num);
            } else {
                putchar(*format);
            }
        } else {
            putchar(*format);
        }

        format++;
    }

    va_end(args);
}

int main(void) {
    _printf("%b\n", 98);
    return 0;
}
