<<<Question 9>>>
#include <stdio.h>
int main ()
{
    int n,i,fact=1;
    printf ("enter the number\n");
    scanf ("%d",&n);
    if (n<=1)
    {
        fact = 0;
    }
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            fact=0;
            break;
        }
    }
    if (fact)
    {
        printf ("prime number");
    }
    else
    {
        printf ("not prime");
    }
    return 0;
}
<<<Question 10>>>
#include <stdio.h>

int main() {
    int n, i,num,fact;
    printf ("enter the last number of range\n");
    scanf ("%d",&num);
    for(n = 2; n <=num; n++) {
        fact = 1;

        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                fact = 0;
                break;
            }
        }

        if(fact == 1)
            printf("%d ", n);
    }

    return 0;
}
<<<Question 11>>>
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    return 0;
}
<<<Question 12>>>
#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        lcm = a;
    else
        lcm = b;

    while(lcm % a != 0 || lcm % b != 0)
    {
        lcm++;
    }

    printf("LCM = %d", lcm);

    return 0;
}