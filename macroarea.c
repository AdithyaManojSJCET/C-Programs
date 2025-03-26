#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, height;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    float area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    float volume = 2* PI * radius *( radius + height);
    printf("Area of the cylinder: %.2f\n", volume);

    return 0;
}

