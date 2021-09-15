#include<stdio.h>
int main()
{

    float c,f;
    printf("Enter Fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Centigrade: %0.2f",c);
    getch();

}
