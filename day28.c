<<<Question 109>>>
#include <stdio.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
};

int main()
{
    struct Library b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Name: ");
    scanf("%s", b.bookName);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("\n----- Library Record -----\n");
    printf("Book ID     : %d\n", b.bookId);
    printf("Book Name   : %s\n", b.bookName);
    printf("Author Name : %s\n", b.author);

    return 0;
}
<<<Question 110>>>
#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", b.name);

    printf("Enter Balance: ");
    scanf("%f", &b.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    b.balance = b.balance + amount;

    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", b.accNo);
    printf("Name           : %s\n", b.name);
    printf("Balance        : %.2f\n", b.balance);

    return 0;
}
<<<Question 111>>>
#include <stdio.h>

int main()
{
    char name[50];
    int age;
    int seats;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Age            : %d\n", age);
    printf("Seats Booked   : %d\n", seats);
    printf("Booking Successful.\n");

    return 0;
}
<<<Question 112>>>
#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c;

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("\n----- Contact Details -----\n");
    printf("Name         : %s\n", c.name);
    printf("Phone Number : %s\n", c.phone);

    return 0;
}