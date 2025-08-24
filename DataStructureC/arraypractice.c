#include <stdio.h>

int main(void) {
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);

    int A[n];
    
    printf("Enter %d numbers: \n", n);
    for (int i=0;i<n;i++) {
        scanf("%d", &A[i]);
    }

    printf("\nYou entered: \n ");
    for (int i=0;i<n;i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}