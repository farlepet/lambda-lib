#ifndef LAMBDA_LIB_STDIO_H
#define LAMBDA_LIB_STDIO_H

#define EOF -1 //!< End-of-file return value

/**
 * Uses `print` to convert the format string and any number of arguments to
 * a string then writes to stdin.
 * 
 * @param format format string
 * @param ... argument list
 * @return the number of characters printed
 * @see print
 */
int printf(const char *, ...);

/**
 * Uses `print` to convert the format string and any number of arguments to
 * an output string.
 * 
 * @param out output string
 * @param format format string
 * @param ... argument list
 * @return the number of characters placed in `out`
 * @see print
 */
int sprintf(char *, const char *, ...);

/**
 * \brief Write character to stdout
 * 
 * @param c Character to write
 * @return EOF on failure, else c
 */
int putchar(int c);

/**
 * \brief Retrieves a character from stdin
 * 
 * @return Character received, else EOF
 */
int getchar(void);

#endif