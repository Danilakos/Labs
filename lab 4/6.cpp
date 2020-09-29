#include <iostream>

int main()
{
	float a1, b1, c1, x;
	printf("Enter the A1, B1, C1 coefficient's"); scanf_s("%f %f %f", &a1, &b1, &c1);
	float  a2, b2, c2, y;
	printf("Enter the A2, B2 and C2 coefficient's"); scanf_s("%f %f %f", &a2, &b2, &c2);
	

	y = (a1 * c2 - a2 * c1) / (b2 * a1 - a2 * b1);
	x = (c1 - b1 * y) / a1; printf("X is %.2f Y is %.2f  ", x,  y);

}
