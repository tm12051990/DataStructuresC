#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *p;
    p=(int *)malloc(5*sizeof(int));

    p[0]=15; p[1]= 24; p[2]=4; p[3]=30; p[4]=13;

    for(int i=0;i<5;i++)
    printf("%d\n", p[i]);

    free(p);

    return 0;
}