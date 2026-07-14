<<<Question 101>>>
#include <stdio.h>

int main()
{
    int number = 25;
    int guess;

    printf("Guess the number (1 to 50): ");

    do
    {
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High! Try Again: ");
        else if(guess < number)
            printf("Too Low! Try Again: ");

    } while(guess != number);

    printf("Congratulations! You guessed the correct number.");

    return 0;
}
<<<Question 102>>>
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("You are Eligible to Vote.");
    else
        printf("You are Not Eligible to Vote.");

    return 0;
}
<<<Question 103>>>
#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Updated Balance = %.2f", balance);
            break;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Updated Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance.");
            }
            break;

        default:
            printf("Invalid Choice.");
    }

    return 0;
}
<<<Question 104>>>
#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("----- Simple Quiz -----\n\n");

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Lucknow\n4. Jaipur\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n4. 14\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d / 3", score);

    return 0;
}