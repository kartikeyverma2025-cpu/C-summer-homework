<<<Question 117>>>
#include <stdio.h>

int main()
{
    int roll[5], marks[5], i;
    char name[5][30];

    printf("Enter details of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }

    return 0;
}
<<<Question 118>>>
#include <stdio.h>

struct Library
{
    int bookId;
    char bookName[30];
};

int main()
{
    struct Library book[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Book %d Details\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &book[i].bookId);

        printf("Book Name: ");
        scanf("%s", book[i].bookName);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nBook ID   : %d", book[i].bookId);
        printf("\nBook Name : %s\n", book[i].bookName);
    }

    return 0;
}
<<<Question 119>>>
#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee emp[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter Employee %d Details\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nID     : %d", emp[i].id);
        printf("\nName   : %s", emp[i].name);
        printf("\nSalary : %.2f\n", emp[i].salary);
    }

    return 0;
}
<<<Question 120>>>
#include <stdio.h>

void display(int roll[], char name[][30], int marks[], int n)
{
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %d\n", marks[i]);
    }
}

int main()
{
    int roll[3], marks[3], i;
    char name[3][30];

    printf("Enter details of 3 students:\n");

    for(i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    display(roll, name, marks, 3);

    return 0;
}