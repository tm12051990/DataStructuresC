#include <stdio.h>
#include <stdlib.h>

int *fun(int size)
{
    int *p = malloc(size * sizeof *p);
    if (!p) return NULL;

    for(int i=0; i<size; i++) {
    p[i]= i*2;
    }
    return p;

}

int main(void)
{
    int sz = 5;
    int *ptr = fun(sz);

    for(int i=0; i < sz; i++) {
    printf("%d\n", ptr[i]);
    }

    free(ptr);
    return 0;
}