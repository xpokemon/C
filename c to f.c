#include<stdio.h>
int main()
{

    double c,f;
    printf("Enter Centigrade: ");
    scanf("%lf",&c);
    f=(c*1.8)+32;
    printf("Fahrenheit: %0.2lf",f);
getch();
}
