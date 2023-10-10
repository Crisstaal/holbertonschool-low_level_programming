#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);
int _strien(char *s);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *custom_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char*src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *a);
char *cap_string(char *str);
char *leet(char *c);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
