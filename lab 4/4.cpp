#include <iostream>

int main()
{
    float v1, v2, s, t;
    printf("Enter the speed of the first racer km/h"); scanf_s("%f", &v1);
    printf("Enter the speed of the seconf racer km/h"); scanf_s("%f", &v2);
    printf("Enter the distance between drivers km"); scanf_s ("%f", &s);
    printf("Enter the T hours"); scanf_s("%f", &t);

    s = s + v1 * t + v2 * t;
    printf("The distance after %.2f hour(s) is %.2f", t, s);
}
