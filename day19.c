<<<Question 73>>>
#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);

    int A[row][col], B[row][col], Sum[row][col];

    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum of Matrices:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
<<<Question 74>>>
#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);

    int A[row][col], B[row][col], Sub[row][col];

    printf("Enter First Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Second Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Subtraction of Matrices:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            Sub[i][j] = A[i][j] - B[i][j];
            printf("%d ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
<<<Question 75>>>
#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);

    int A[row][col];

    printf("Enter Matrix Elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Transpose Matrix:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}
<<<Question 76>>>
#include <stdio.h>

int main()
{
    int i, j, n;
    int sum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter Matrix Elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + A[i][i];
    }

    printf("Sum of Diagonal Elements = %d", sum);

    return 0;
}