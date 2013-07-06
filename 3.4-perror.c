#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void){
    int fd = open("/tmp/does-not-exist", O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(-1);
    }
    return 0;
}
