#include <iostream>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter a"); scanf_s("%f", &a);
    b = pow(a, 2); c = pow(a, 3);
    a = c * c * c * b * b * b;
    printf("Meaning is %f", a);


}

