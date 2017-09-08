#include <stdio.h>
int main()
{
    int base, exponent;

    long long result = 1;

    printf("Enter a number: ");
    scanf("%d", &base);

    printf("Enterxponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Aner = %lld", result);

    return 0;
}
