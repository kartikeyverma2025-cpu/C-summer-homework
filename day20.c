<<<Question 77>>>
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of First Matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d%d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter First Matrix:\n");
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter Second Matrix:\n");
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for(k = 0; k < c1; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    printf("Multiplication of Matrices:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", C[i][j]);

        printf("\n");
    }

    return 0;
}
<<<Question 78>>>
#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter Matrix Elements:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(A[i][j] != A[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");

    return 0;
}
<<<Question 79>>>
#include <stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    int A[row][col];

    printf("Enter Matrix Elements:\n");

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &A[i][j]);

    printf("Row-wise Sum:\n");

    for(i = 0; i < row; i++)
    {
        int sum = 0;

        for(j = 0; j < col; j++)
        {
            sum = sum + A[i][j];
        }

        printf("Row %d = %d\n", i + 1, sum);
    }

    return 0;
}
<<<Question 80>>>
#include <stdio.h>

int main()
{
    int row, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    int A[row][col];

    printf("Enter Matrix Elements:\n");

    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &A[i][j]);

    printf("Column-wise Sum:\n");

    for(j = 0; j < col; j++)
    {
        int sum = 0;

        for(i = 0; i < row; i++)
        {
            sum = sum + A[i][j];
        }

        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}