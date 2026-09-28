#include <stdio.h>
#include <math.h>

float f(float x)
{
    return 1.0 / (1.0 + x * x);
}

int main()
{
    float a, b, h, sum = 0.0, integral;
    int n, i;

    printf("Enter lower limit (a): ");
    scanf("%f", &a);

    printf("Enter upper limit (b): ");
    scanf("%f", &b);

    printf("Enter number of sub-intervals (n): ");
    scanf("%d", &n);

    h = (b - a) / n;

    sum = f(a) + f(b);

    for (i = 1; i < n; i++)
    {
        float x = a + i * h;
        sum += 2.0 * f(x);
    }

    integral = (h / 2.0) * sum;

    printf("Value of integral = %f\n", integral);

    return 0;
}
