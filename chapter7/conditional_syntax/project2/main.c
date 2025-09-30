#include <stdio.h>

#ifdef DEBUG_MODE
#include "foo.h"    // Include foo.h only if DEBUG_MODE is defined
#else
#include "bar.h"    // Include bar.h if DEBUG_MODE is not defined
#endif

int main() {
    printf("Hello from main!\n");

#ifdef DEBUG_MODE
    foo_func();     // Call foo_func() only in DEBUG mode
#else
    bar_func();     // Call bar_func() only in RELEASE mode
#endif

    return 0;
}

