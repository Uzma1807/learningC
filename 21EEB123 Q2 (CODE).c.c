#include <stdio.h>
int main()
{
    float F, C;
    printf("Enter the value of Temperature (in Farenheit) = ");
    scanf("%f", &F);
    /*formula*/
    C = (F - 32) * 5/9;
    printf("\nTemperature (in Celcius) = ");
    printf("%0.2f", C);
}
