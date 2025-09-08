#include <stdio.h>
void foo();
void bar();

int main() {
    printf("Main start\n");
    foo();
    bar();
    printf("Main end\n");
    return 0;
}

