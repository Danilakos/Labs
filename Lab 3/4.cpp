#include <iostream>
#include <math.h>
int main()
{
    float x;
    printf("Enter the x"); scanf_s("%f", &x);
    float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    printf("The meaning is %.2f", y);

}
