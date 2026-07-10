<<<Question 61>>>
#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, total = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    total = n * (n + 1) / 2;

    printf("Missing Number = %d", total - sum);

    return 0;
}
<<<Question 62>>>
#include <stdio.h>

int main()
{
    int n, i, j;
    int maxCount = 0, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with Maximum Frequency = %d", element);
    printf("\nFrequency = %d", maxCount);

    return 0;
}
<<<Question 63>>>
#include <stdio.h>

int main()
{
    int n, i, j, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
            }
        }
    }

    return 0;
}
<<<Question 64>>>
#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n;)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}