#include <stdio.h>

#include <fcntl.h>

int main(void) {
    int fd = open("test.elf", O_RDONLY);

    printf("Return value from `open(\"test.elf\", O_RDONLY): %d\n", fd);

    

    return 0;
}