#include<stdio.h>
#include<math.h>

int main() {
    float angle = 60;
    float a = 567, b = 42;
    printf("sin(%.2f°) = %f\n", angle, sin(angle * M_PI / 180));
    printf("%.2f ** %.2f = %.2f\n", a, b, pow(a,b));
}
