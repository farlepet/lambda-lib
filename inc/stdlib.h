#ifndef LAMBDA_LIB_STDLIB_H
#define LAMBDA_LIB_STDLIB_H

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Terminate currently-running process
 * 
 * @param status Exit status to give to parent process.
 */
void exit(int status);

/**
 * @brief Get value of environment variable
 *
 * @param name Environment variable name
 *
 * @return char* Null if not found, else pointer to value in environ.
 */
char *getenv(const char *name);

/**
 * @brief Allocate memory region of given size
 *
 * @param size Size of desired memory region
 *
 * @return void* Pointer to allocated memory region, or NULL on failure
 */
void *malloc(size_t size);

/**
 * @brief Free a previously allocated memory region
 *
 * @param ptr Pointer to allocated memory region
 */
void free(void *ptr);

#endif