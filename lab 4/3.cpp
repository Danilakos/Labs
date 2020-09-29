#include <iostream>

int main()
{
    float kg, mon, per;
        printf ("Enter number of killograms you bought "); scanf_s("%f", &kg);
        printf("Enter what sum you payed"); scanf_s("%f", &mon);
        per = mon / kg;
        printf("For one kg you will pay %.2f \n", per);
        printf("How many kg of candies do you want?"); scanf_s("%f", &kg); printf("It will cost %.2f", per * kg);


}
