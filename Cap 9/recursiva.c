#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if (n == 0)
    {
        printf("%d\n", n);
        return 1;
    }
    else
    {
        printf("%d\n", n);
        return n * fatorial(n - 1);
    }
}

int fibo(int n)
{
    if (n == 0 || n == 1)
    {        
        return n;
    }
    else
    {        
        return fibo(n - 1) + fibo(n - 2); // Temos que abrir para entender o algoritmo
    }
}

int main()
{
    int k = fatorial(4);
    printf("%d\n\n", k);

    int m = fibo(8);
    printf("%d", m);

    return 0;
}