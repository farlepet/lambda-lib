
/* @todo Perhaps not the best place to store this. */
char **environ;

/* Arguments are passed in via crt0. */
void _lib_init(int argc, char **argv, char **envp) {
    (void)argc;
    (void)argv;

    environ = envp;

    /* @todo: Initialize memory allocation. */
}