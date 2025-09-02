#include <stdio.h>
#include "config.h"
#include "add.h"
#include "sub.h"

int main() {
    int a = 10, b = 5;
    printf("Addition: %d\n", add(a, b));
    printf("VERSION: %d\n", VERSION);
    return 0;
}

