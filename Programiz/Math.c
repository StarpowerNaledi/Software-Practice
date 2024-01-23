//Program to practise functions in the math.h file
#include <stdio.h>
#include <math.h>

int main (){
    
    double number;
    
    printf("Enter number: ");
    scanf("%lf", &number);
    
    double square = sqrt(number);
    double power = pow(number, square);
    
    printf("Square root of %.2lf is %.2lf", number, square);
    printf("\nPower of %.2lf to %lf is %.2lf", number, square, power);
    
    return 0;
}
