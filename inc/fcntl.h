#ifndef LAMBDA_LIB_FCNTL_H
#define LAMBDA_LIB_FCNTL_H

#define O_RDONLY 0x01 //!< Read-only
#define O_WRONLY 0x02 //!< Write-only
#define O_RDWR   0x04 //!< Read/Write



/**
 * \brief Open a file, possibly creating it
 * 
 * @param name Name of file and directory to open
 * @param flags Access flags, and additional options
 */
int open(const char *name, int flags, ...);

#endif