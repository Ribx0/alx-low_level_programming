#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*r)(char *));
int _putchar(char chr);
void array_iterator(int *arr, size_t sze, void (*act)(int));
int int_index(int *arr, int sze, int (*cp)(int));

#endif
