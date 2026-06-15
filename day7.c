<<<Question-25>>>
#include <stdio.h>

int fact(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", fact(n));

    return 0;
}
<<<Question 26>>>
#include <stdio.h>

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
<<<Qestion-27>>>
#include <stdio.h>

int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sum(n));

    return 0;
}
<<<Question-28>>>
#include <stdio.h>

int rev = 0;

int reverse(int n)
{
    if(n == 0)
    {
        return rev;
    }
    else
    {
        rev = rev * 10 + n % 10;
        return reverse(n / 10);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    return 0;
}