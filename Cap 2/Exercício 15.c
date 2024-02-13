#include <stdio.h>
#include <stdlib.h>

int main () {
    char char1;
    int int1;
    float float1;
    
    printf("Insira um número inteiro: ");
    scanf("%c %d %f", &char1, &int1, &float1);

    printf("%c %d %f\n", char1, int1, float1);
    printf("%c \t %d \t %f\n", char1, int1, float1);
    printf("\n%c\n%d\n%f\n\n", char1, int1, float1);
    
    return 0;
}