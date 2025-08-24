#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int num1=10,num2=15,sum;
    swap(&num1,&num2);

    printf("First Number is %d\n", num1);
    printf("Second Number is %d\n", num2);

    return 0;
}