<<<Question 113>>>
#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Result = %.2f", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
<<<Question 114>>>
#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += arr[i];

            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int max = arr[0];

            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }

            printf("Maximum = %d", max);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}
<<<Question 115>>>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
        {
            int i;
            for(i = strlen(str) - 1; i >= 0; i--)
                printf("%c", str[i]);
            break;
        }

        case 3:
        {
            int i;

            for(i = 0; str[i] != '\0'; i++)
            {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }

            printf("Uppercase String = %s", str);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}
<<<Question 116>>>
#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item;

    printf("Enter Item ID: ");
    scanf("%d", &item.id);

    printf("Enter Item Name: ");
    scanf("%s", item.name);

    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter Price: ");
    scanf("%f", &item.price);

    printf("\n----- Inventory Details -----\n");
    printf("Item ID   : %d\n", item.id);
    printf("Item Name : %s\n", item.name);
    printf("Quantity  : %d\n", item.quantity);
    printf("Price     : %.2f\n", item.price);

    return 0;
}