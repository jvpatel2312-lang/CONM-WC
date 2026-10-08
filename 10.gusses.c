#include <stdio.h>

int main()
{
    int i, j, k, n;
    float a[10][10], ratio, x[10];

    printf("Enter number of equations: ");
    scanf("%d", &n);

    printf("Enter augmented matrix row-wise:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    /* Forward Elimination */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            ratio = a[j][i] / a[i][i];

            for (k = 0; k <= n; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    /* Display Upper Triangular Matrix */
    printf("\nUpper Triangular Matrix (UTM):\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            printf("%.4f\t", a[i][j]);
        }
        printf("\n");
    }

    /* Back Substitution */
    x[n - 1] = a[n - 1][n] / a[n - 1][n - 1];

    for (i = n - 2; i >= 0; i--)
    {
        x[i] = a[i][n];

        for (j = i + 1; j < n; j++)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }

        x[i] = x[i] / a[i][i];
    }

    /* Display Solution */
    printf("\nSolution:\n");

    for (i = 0; i < n; i++)
    {
        printf("x%d = %.2f\n", i + 1, x[i]);
    }

    return 0;
}