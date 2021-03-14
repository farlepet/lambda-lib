#ifndef LAMBDA_LIB_STRING_H
#define LAMBDA_LIB_STRING_H

#include <stddef.h>

/**
 * Calculates the length of a string.
 * 
 * @param str the string to calculate the length of
 * @return the length of the string
 */
size_t strlen(const char *str);

/**
 * Compares two strings.
 * 
 * @param a first string to compare
 * @param b seconds string to compare
 * @return 0 if equal. Less than 0 if a < b, greater than 0 if a > b at the differing character.
 */
int strcmp(const char *a, const char *b);

/**
 * Compares the first n bytes of two strings.
 * 
 * @param a first string to compare
 * @param b seconds string to compare
 * @param n number of characters to compare
 * @return 0 if equal. Less than 0 if a < b, greater than 0 if a > b at the differing character.
 */
int strncmp(const char *a, const char *b, size_t n);

#endif
