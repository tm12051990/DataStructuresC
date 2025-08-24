#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

int main(void) 
{
    struct Rectangle *p;
    p=(struct Rectangle*)malloc(sizeof(struct Rectangle));

    p->length = 10;
    p->width = 20;
    
    printf("length = %d\nwidth = %d\n", p->length, p->width);
    printf("size is %d\n", sizeof(*p));

    return 0;
}