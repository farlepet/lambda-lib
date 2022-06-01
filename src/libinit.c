#include <stdlib.h>

/* @todo Perhaps not the best place to store this. */
char **environ;

/* @todo Place this somewhere else */
extern int __lib_alloc_init();

/* Arguments are passed in via crt0. */
void _lib_init(int argc, char **argv, char **envp) {
    (void)argc;
    (void)argv;

    environ = envp;

    if(__lib_alloc_init()) {
        exit(-1);
    }
}