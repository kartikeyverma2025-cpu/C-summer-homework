<<<Question 45>>>
#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, rem, temp;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}
<<<Question 46>>>
#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(temp == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
<<<Question 47>>>
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
<<<Question 48>>>
#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(perfect(n))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}