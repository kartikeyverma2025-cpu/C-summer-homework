<<<Question 97>>>
#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n1)
        c[k++] = a[i++];

    while(j < n2)
        c[k++] = b[j++];

    printf("Merged Array:\n");

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
<<<Question 98>>>
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("Common Characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}
<<<Question 99>>>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][50], temp[50];
    int i, j;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++)
        gets(name[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", name[i]);

    return 0;
}
<<<Question 100>>>
#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][50], temp[50];
    int i, j;

    printf("Enter 5 names:\n");

    for(i = 0; i < 5; i++)
        gets(name[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");

    for(i = 0; i < 5; i++)
        printf("%s\n", name[i]);

    return 0;
}