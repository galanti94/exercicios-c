#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if (n == 0)
    {

        return 1;
    }
    else
    {

        return n * fatorial(n - 1);
    }
}

float neper(int N)
{
    float acumulado = 0.0;
    for (int i = 0; i <= N; i++)
    {
        acumulado += 1.0 / fatorial(i);
    }
    return acumulado;
}

int main()
{
    printf("%f\n", neper(10));
    return 0;
}