#include <stdio.h>
#include <math.h>

int main()
{
    int k, K = 11;
    for (int j = 8; j < K; j++)
    {
    for (int c = 0; c < K; c++)
    {
        k = 0;
        for (int i = 0; i < c; i++)
            k += (pow(10, (c - i)) * i);
        k /= 10;
        if (k > 0)
        {
            for (int i = 0; i < (K - c); i++)
                printf(" ");
            printf("%d x %d + %d = %d\n", k, j, c - 1, (k * j) + c - 1);
        }
    }
    printf("\n");
    }
    return 0;
}