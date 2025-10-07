#include <stdio.h>
#include "mathutils.h"

extern void startup_msg(void);

int main() {
    startup_msg();
    printf("Sum = %d\n", add(10,5));
    printf("Diff = %d\n", sub(10,5));
    return 0;
}

