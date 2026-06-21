<<<Question 33>>>
#include <stdio.h>
int main()
    int i, j;
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
<<<Question 34>>>
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
<<<Question 35>>>
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}
<<<Question 36>>>
#include <stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}