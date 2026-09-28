#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i, j;
    float x[10], y[10][10], xi, h, u, result, term = 1;

    printf("enter number of data points: ");
    scanf("%d", &n);

    printf("enter x value:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);

    }

    printf("enter value of y:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &y[i][0]);

    }

    for (j = 1; j < n; j++)
    {

        for (i = 0; i < n - j; i++)
        {

            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];

        }
    }

    printf("enter value of x to enterpolete: \n");
    scanf("%f", &xi);

    h = x[1] - x[0];

    u = (xi - x[0]) / h;

    result = y[0][0];

    for (i = 1; i < n; i++)
    {
        term = term * (u - (i - 1)) / i;

        result = result + term * y[0][i];

    }

    printf("interpolete value as %.2f = %.4f\n", xi, result);

    return 0;
}
