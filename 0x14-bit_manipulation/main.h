#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
