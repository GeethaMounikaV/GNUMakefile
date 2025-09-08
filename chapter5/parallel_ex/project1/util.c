#include <stdio.h>
#include <unistd.h>
#include "util.h"

void util(const char *who) {
    printf("util says hi to %s\n", who);
    fflush(stdout);
    usleep(200000); // slow down a bit to make interleaving obvious
}

