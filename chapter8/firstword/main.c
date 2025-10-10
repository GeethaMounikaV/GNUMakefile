#include <stdio.h>
#include "utils.h"
#include "helper.h"

int main() {
    printf("Sum from utils: %d\n", add(10, 20));
    printf("Helper says: %s\n", helper_msg());
    return 0;
}

