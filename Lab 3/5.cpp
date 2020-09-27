#include <iostream>
#include <math.h>
int main()
{
	float x;
	printf("Enter the x"); scanf_s("%f", &x);
	float y = 4 * pow((x - 3), 6) - 7 * pow ((x - 3), 3) + 2;
	printf("The meaning is %.2f", y);


}
