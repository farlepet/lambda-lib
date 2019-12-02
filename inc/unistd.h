#ifndef LAMBDA_LIB_UNISTD_H
#define LAMBDA_LIB_UNISTD_H

#include <stddef.h>
#include <sys/types.h>

#define STDIN_FILENO  0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2

size_t read(int desc, void *buff, size_t len);

size_t write(int desc, const void *buff, size_t len);

/**
 * \brief Close an open file descriptor
 * 
 * @param fd File descriptor to close
 * 
 * @return 0 on success, else -1
 */
int close(int fd);


/**
 * @brief Replace the current process image with a new one created from the
 * specified executable
 * 
 * @param path Path to executable file
 * @param argv List of program arguments, the first of which should represent the file being executed
 * @param envp List of environment variables
 * 
 * @return int -1 on error, else no return
 */
int execve(const char *path, char *const argv[], char *const envp[]);

/**
 * @brief Forks the current running process into two identical processes.
 * 
 * @return pid_t -1 on error (this overlaps with the kernel process), 0 for the
 * for the child process, otherwise the PID of the child process.
 */
pid_t fork(void);

#endif