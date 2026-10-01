#include <stdio.h>

int main(){

    float radius, height, volume, surface_area;
    float pi = 3.142;

    printf("Enter the radius of the cylinder: \t");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: \t");
    scanf("%f", &height);

    volume = pi * radius * radius * height;

    surface_area = (2 * pi * radius * radius) +
                   (2 * pi * radius * height);

    printf("\n");
    printf("CYLINDER CALCULATION PROGRAM \n");
    printf("============================ \n");
    printf("Radius: %.2f \n", radius);
    printf("Height: %.2f \n", height);
    printf("Volume: %.2f \n", volume);
    printf("Surface Area: %.2f \n", surface_area);
    printf("============================ \n");

    return 0;
}