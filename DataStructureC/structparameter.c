#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int width;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 15;
    p->width = 7;

    return p;

}

int main(void)
{
    struct Rectangle *ptr=fun();
    printf("length is %d\nwidth is %d\n", ptr->length, ptr->width);

    return 0;
}