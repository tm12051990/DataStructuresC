#include <stdio.h>
#include <stdlib.h>

struct RightTriangle
{
    int base;
    int height;
    int hypotenuse;
};

void initialize(struct RightTriangle *rt, int hyp, int b, int h)
{
    rt->base = b;
    rt->height = h;
    rt->hypotenuse = hyp;
}

float area(struct RightTriangle rt)
{
    return rt.base * rt.height * 0.5f;
}

void changeheight(struct RightTriangle *rt, int h)
{
    rt->height = h;
}

int main(void)
{
    struct RightTriangle rt;

    initialize(&rt, 10, 8, 5);

    float a = area(rt);

    changeheight(&rt, 7);

    printf("Dimensions are base=%d, height=%d\n, hypotenuse=%d\n", rt.base, rt.height, rt.hypotenuse);
    printf("area is %.2f\n", a);
    printf("height is %d\n", rt.height);

    return 0;
}