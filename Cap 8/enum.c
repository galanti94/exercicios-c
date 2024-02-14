#include <stdio.h>
#include <stdlib.h>

enum Level
{
    LOW = 1,
    MEDIUM = 2,
    HIGH = 3
};

int main()
{
    enum Level myLevel = LOW;
    switch (myLevel)
    {
    case 1: // Pode ser LOW ao invés de 1
        printf("My level is LOW! \n\n");
        break;

    case 2:
        printf("My level is MEDIUM! \n\n");
        break;

    case 3:
        printf("My level is HIGH! \n\n");
        break;

    default:
        break;
    }

    return 0;
}