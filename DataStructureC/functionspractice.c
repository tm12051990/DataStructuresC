#include <stdio.h>

int add(int a, int b) {
    int c;
    c = a + b;
    return (c);
}


int main(void) {
    int x,y,z;

    x = 10;
    y = 5;

    z = add(x,y);
    printf("z = %d\n", z);

    return 0;
}