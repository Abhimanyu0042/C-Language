#include <iostream>
using namespace std;

int main() {
    float temp ,x,y,celsius;
    printf("Enter the temperature in Fahrenhiet :\n");
    scanf("%f", &temp);
    x = temp - 32;
    y = x*5;
    celsius = y/9;
    printf("The value is %f\n",celsius);
}