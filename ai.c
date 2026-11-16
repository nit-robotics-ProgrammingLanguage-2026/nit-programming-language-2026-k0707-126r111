
#include <stdio.h>

int is_prime(int x);

int is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    if (x == 2 || x == 3)
    {
        return 1;
    }

    if (x % 2 == 0 || x % 3 == 0)
    {
        return 0;
    }

    for (int divisor = 5; divisor <= x / divisor; divisor += 6)
    {
        if (x % divisor == 0 || x % (divisor + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int n;
    int prime_count = 0;

    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (n > 10000)
    {
        printf("NG");
        return 0;
    }

    for (int number = 2; number <= n; number++)
    {
        prime_count += is_prime(number);
    }

    printf("%d", prime_count);

    return 0;
}
