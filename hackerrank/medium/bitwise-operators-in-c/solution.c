#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++) 
    {
        for (int b = a + 1; b <= n; b++)
        {
            int and_value = a & b;
            int or_value  = a | b;
            int xor_value = a ^ b;

            if (and_value < k && and_value > max_and)
                max_and = and_value;

            if (or_value < k && or_value > max_or)
                max_or = or_value;

            if (xor_value < k && xor_value > max_xor)
                max_xor = xor_value;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main(void) 
{
    int n, k;
    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);
    return 0;
}
