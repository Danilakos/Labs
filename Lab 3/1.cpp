
#include <iostream>

int main()
{
	float a, b, c;
	printf("Enter two variable's");
	scanf_s("%f %f", &a, &b);
	c = a; a = b; b = c;
	printf("A is %.1f, B is %.1f", a, b);	
	return 0;
}

