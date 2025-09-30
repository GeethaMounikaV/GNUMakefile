#include <stdio.h>

#ifdef INCLUDE_FOO
#include "foo.h"
#else
#include "bar.h"
#endif

int main() {
    printf("Hello from main!\n");

#ifdef INCLUDE_FOO
    foo_func();
#else
    bar_func();
#endif

    return 0;
}

