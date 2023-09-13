#include"main.h"

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long long int a = 1, b = 2, next;
    int i;

    printf("%llu, %llu", a, b);

    for (i = 3; i <= 98; i++)
    {
        next = a + b;
        printf(", %llu", next);
        a = b;
        b = next;
    }

    printf("\n");
    return (0);
}
