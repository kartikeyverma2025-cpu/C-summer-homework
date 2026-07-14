<<<Question 93>>>
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL)
        printf("Strings are Rotation of each other.");
    else
        printf("Strings are not Rotation.");

    return 0;
}
<<<Question 94>>>
#include <stdio.h>

int main()
{
    char str[100];
    int i, count;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}
<<<Question 95>>>
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0, max = 0, start = 0, index = 0;

    printf("Enter a sentence: ");
    gets(str);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
                start = index;
            }

            len = 0;
            index = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word: ");

    for(i = start; i < start + max; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
<<<Question 96>>>
#include <stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0';)
        {
            if(str[i] == str[j])
            {
                int k;

                for(k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    printf("String after removing duplicates: %s", str);

    return 0;
}