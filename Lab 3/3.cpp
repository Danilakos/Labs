#include <iostream>

int main()
{
	float a, b, c, e;
	printf("Enter A, B and C"); scanf_s("%f %f %f", &a, &b, &c);

	e = b; b = c; c = a; a = e;

	printf("Enter A is %.2f, B is %.2f, C is %.2f", a, b, c);

}

