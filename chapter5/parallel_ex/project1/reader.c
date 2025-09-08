#include <stdio.h>

int main(void) {
    char buf[64];
    printf("Enter something: ");
    fflush(stdout);

    if (!fgets(buf, sizeof buf, stdin)) {
        perror("read stdin");
        return 1;
    }
    printf("You typed: %s", buf);
    return 0;
}

