#include <stdio.h>

int main()
{
    int i, j, n;
    float x[10], y[10], xp, yp = 0, p;

    printf("enter number of data points: ");
    scanf("%d", &n);

    printf("enter data point(x,y)\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);

    }

    printf("enter value of x find y:");
    scanf("%f", &xp);

    for (i = 0; i < n; i++)
    {
        p = 1;
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                p = p * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp = yp + p * y[i];
    }

    printf("interpolation vlaue at x=%.2f is y=%.4f", xp, yp);

    return 0;
}
