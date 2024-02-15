#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 5;
    // Ponteiro padrão
    int *ptr;
    ptr = &m;
    printf("%d \n", *ptr);

    // Ponteiro genérico
    void *pp;
    pp = &m;
    printf("%d\n", *(int*)pp);

    return 0;
}