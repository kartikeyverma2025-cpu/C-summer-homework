<<<Question 13>>>
#include <stdio.h>
int main ()
{
    int n,i,a=0,b=1,c;
    printf ("enter the last term of series\n");
    scanf ("%d",&n);
    printf ("febonacci series: \n");
    for (i=1;i<=n;i++)
    {
        printf ("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
<<<Question 14>>>
#include <stdio.h>
int main ()
{
    int a=0,b=1,c,n,i;
    printf ("enter the value of n : \n");
    scanf ("%d",&n);
    if (n==1)
    {
        printf ("the %dst term is %d",n,a);
    }
    else if (n==2)
    {
        printf ("the %dst term is %d",n,b);
    }
    else
    {
        for (i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf ("the %d term is %d",n,c);
    }
    return 0;
}
<<<Question 15>>>
#include <stdio.h>

int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);

    return 0;
}
<<<Question 16>>>
#include <stdio.h>

int main()
{
    int num, temp, rem, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for(num = 1; num <= 1000; num++)
    {
        temp = num;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}