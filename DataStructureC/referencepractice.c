#include <stdio.h>

int main(void) {
    int a=10;
    int *r = &a;

    printf("a = %d\n", a);
    printf("*r = %d\n", *r);

    return 0;
}