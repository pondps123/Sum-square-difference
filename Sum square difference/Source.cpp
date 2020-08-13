#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	float sum1 = 0, sum2 = 0, sum3 = 0;
	printf("Enter number : ");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		while (a <= b)
		{
			sum1 += pow(a, 2);
			sum2 += a;
			a++;
		}
		printf("sum of the squares = %.1f \n", sum1);
		sum3 = pow(sum2, 2);
		printf("square of the sum = %.1f \n", sum3);
		printf("difference between the sum of the squares and the square of the sum = %.1f ", sum3 - sum1);
	}
	else if (a > b)
	{
		while (a >= b)
		{
			sum1 += pow(a, 2);
			sum2 += a;
			a--;
		}
		printf("sum of the squares = %.1f \n", sum1);
		sum3 = pow(sum2, 2);
		printf("square of the sum = %.1f \n", sum3);
		printf("difference between the sum of the squares and the square of the sum = %.1f ", sum3 - sum1);
	}
	return 0;
}