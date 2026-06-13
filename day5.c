<<<Question 17>>>
#include <stdio.h>
int main ()
{
    int sum = 0,n,i;
    printf ("enter the number\n");
    scanf ("%d",&n);
    for (i=1;i<=n/2;i++)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }}
        if (sum == n)
        {
            printf ("%d is a perfect number\n",n);
        }
        else 
        {
           printf ("%d is not a perfect number\n",n);
        }   
    return 0;
}
<<<Question 18>>>
#include <stdio.h>
int main ()
{
    int n,i,temp,digit,sum=0,fact;
    printf ("enter the number\n");
    scanf ("%d",&n);
    temp = n;
    while (n>0)
    {
        digit = n % 10;
        fact = 1;
        for (i=1;i<=digit;i++)
        {
            fact = fact * i;
        }
            sum = sum + fact;
            n = n/10;
    }
    if (sum == temp)
    {
        printf ("%d is strong number\n",temp);
    }
    else 
    {
        printf ("%d is not strong number\n",n);
    }
    return 0;
}
<<<Question 19>>>
#include <stdio.h>
int main ()
{
    int n,i;
    printf ("enter the number\n");
    scanf ("%d",&n);
    printf ("the factorial of the number is :\n");
    for (i=1;i<=n;i++)
    {
        if (n % i == 0)
        {
            printf ("%d",i);
        }
    }
    return 0;
}
<<<Question 20>>>
#include <stdio.h>
int main ()
{
    int i,n,temp,j,largest=0;
    printf ("enter the number \n");
    scanf ("%d",&n);
    for (i=2;i<=n;i++)
    {
        if (n % i == 0)
        {
           temp = 1;
            for (j=2;j<=i/2;j++)
            {
                if (i%j == 0)
                {
                    temp = 0;
                    break;
                }
            }
            if (temp == 1)
            {
                largest = i;
            }
        }
    }
    printf ("largest prime factor is %d",largest);
    return 0;
}