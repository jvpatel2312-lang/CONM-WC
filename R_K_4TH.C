#include<stdio.h>
#include<conio.h>

float f (float x0 , float y0)
{
	return (x0 + y0);
}

void main()
{
	float x0,y0,h,xn,k1,k2,k3,k4,y1;
	int i,n;
	clrscr();

	printf("\nEnter Initial X0 : ");
	scanf("%f", &x0);

	printf("\nEnter Initial Y0 : ");
	scanf("%f", &y0);

	printf("\nEnter sTEP sIze h : ");
	scanf("%f", &h);

	printf("\nEnter Final value xn : \n");
	scanf("%f", &xn);

	n = (xn-x0)/h;

	printf("X\t\t Y\n");
	printf("%.4f\t\t %.4f\n",x0,y0);

	for(i=1;i<=n;i++)
	{
		k1 = h * f(x0,y0);

		k2 = h * f(x0 + h/2 , y0 + k1/2);

		k3 = h * f(x0 + h/2 , y0 + k2/2);

		k4 = h * f(x0 + h , y0 + k3);

		y1 = y0 + (k1 + (2*k2) + (2*k3) + k4)/6;

		printf("%.4f\t\t %.4f\n",x0,y1);

	}

	printf("\nApprox Solution at X = %.4f is Y = %.4f", xn,y1);

	getch();
}