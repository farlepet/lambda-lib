#include <stdio.h>

#include <fcntl.h>
#include <unistd.h>

int main(void) {
    int fd = open("test.elf", O_RDONLY);

    printf("Return value from `open(\"test.elf\", O_RDONLY): %d\n", fd);

    int ret = close(fd);

    printf("Return value from `close(fd): %d\n", ret);

    return 0;
}