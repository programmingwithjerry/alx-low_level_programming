#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H
#define M_PI 3.14159265358979323846

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, const char *src, size_t n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *s);
char *leet(char *str);


#endif
