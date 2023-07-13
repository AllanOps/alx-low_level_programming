#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void errors(void);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strlen(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int is_digit(char *s);

#endif
