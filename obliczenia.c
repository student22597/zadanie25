#include <stdio.h>

float volume_cuboid(float a, float b, float h) {
    return a * b * h;
}

void calculate_volume_cuboid() {
    float a, b, h;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    printf("Podaj dlugosc boku h: ");
    scanf("%f", &h);

    printf("Objetosc prostopadloscianu: %.2f\n", volume_cuboid(a, b, h));
}

int main() {
    calculate_volume_cuboid();
    return 0;
}
