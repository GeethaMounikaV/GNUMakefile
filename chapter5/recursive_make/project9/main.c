#include <stdio.h>
#include "common.h"

#ifndef BUILD_ENV
#define BUILD_ENV "default"
#endif

int main() {
    printf("MAIN: BUILD_ENV = %s\n", BUILD_ENV);
    print_common("Hello from lib!");
    return 0;
}

