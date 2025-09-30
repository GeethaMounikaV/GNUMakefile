#include <stdio.h>

#ifdef INCLUDE_FOO
#include "foo.h"
#endif

int main() {
    printf("Hello from main!\n");
    return 0;
}

