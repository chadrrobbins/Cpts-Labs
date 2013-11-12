#ifndef STRINGS_H
#define STRINGS_H

#include <stdio.h>
#include <stdlib.h>

char *string_reverse (char *myString, int str_size);
char *my_strcopy (char *str_destination, const char *str_source, int str_size);
char *my_strcat (char *destination, const char *source, int dest_size, int source_size);
int my_strcompare (const char *s1, const char *s2);
int my_strlength (char *mystring);

#endif