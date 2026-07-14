<<<Question 105>>>
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n", s.roll);
    printf("Name        : %s\n", s.name);
    printf("Marks       : %.2f\n", s.marks);

    return 0;
}
<<<Question 106>>>
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n----- Employee Details -----\n");
    printf("ID     : %d\n", e.id);
    printf("Name   : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}
<<<Question 107>>>
#include <stdio.h>

int main()
{
    char name[50];
    float basic, hra, da, total;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;

    total = basic + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Total Salary  : %.2f\n", total);

    return 0;
}
<<<Question 108>>>
#include <stdio.h>

int main()
{
    char name[50];
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Name        : %s\n", name);
    printf("Total Marks : %d\n", total);
    printf("Percentage  : %.2f\n", percentage);

    if(percentage >= 90)
        printf("Grade : A+");
    else if(percentage >= 75)
        printf("Grade : A");
    else if(percentage >= 60)
        printf("Grade : B");
    else if(percentage >= 40)
        printf("Grade : C");
    else
        printf("Grade : Fail");

    return 0;
}