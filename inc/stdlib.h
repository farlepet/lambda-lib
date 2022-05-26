#ifndef LAMBDA_LIB_STDLIB_H
#define LAMBDA_LIB_STDLIB_H

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

#endif