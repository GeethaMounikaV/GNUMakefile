#include <stdio.h>

#ifdef DEBUG_MODE
#include "foo.h"
#else
#include "bar.h"
#endif

int main() {
    printf("Hello from main!\n");

#ifdef DEBUG_MODE
    foo_func();
#else
    bar_func();
#endif

    return 0;
}

