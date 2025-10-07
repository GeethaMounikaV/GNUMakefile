#include <stdio.h>
#include "mathutils.h"

int main() {
    int a = 10, b = 5;
    printf("Sum = %d\n", add(a,b));
    printf("Diff = %d\n", sub(a,b));

#ifdef DEBUG
    printf("[DEBUG] a=%d, b=%d\n", a, b);
#endif
    return 0;
}

