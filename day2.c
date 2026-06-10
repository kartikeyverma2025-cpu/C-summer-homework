<<<Question 5>>>
#include <stdio.h>
int main ()
{
    int n,sum=0;
    printf ("enter the numbers\n");
    scanf ("%d",&n);
    while (n>0)
    {
        sum=sum+ (n%10);
        n = n/10;
    }
    printf ("sum of digits is %d",sum);
    return 0;
}
<<<Question 6>>>
#include <stdio.h>
int main ()
{
    int n,rev=0,digit;
    printf ("enter the number\n");
    scanf ("%d",&n);
    while (n>0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf ("the revrese of digit is %d",rev);
    return 0;
}
<<<Question 7>>>
#include <stdio.h>
int main ()
{
    int n,product=1;
    printf ("enter the number \n");
    scanf ("%d",&n);
    while (n>0)
    {
       product = product * (n%10);
       n = n/10;
    }
    printf ("the product of digits are %d",product);
    return 0;
}
<<<Question 8>>>
#include <stdio.h>
int main()
{
    int num, original, rev = 0, digit;

    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(original == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    return 0;
}