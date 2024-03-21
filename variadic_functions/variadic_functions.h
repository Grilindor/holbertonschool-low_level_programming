#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * struct print_type - A new struct type defining a printer.
 * @the_format_in_char: A symbol representing a data type.
 * @Funcp: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct print_type
{
	char *the_format_in_char;
	void (*Funcp)();
} array;

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
