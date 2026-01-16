#include <stdio.h>

/* Funkcja obliczajaca objetosc prostopadloscianu */
/*
float volume_cuboid(float a, float b, float c) {
    return a * b * c;
}

void calculate_volume_cuboid() {
    float a, b, c;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    printf("Podaj dlugosc boku c: ");
    scanf("%f", &c);

    printf("Objetosc prostopadloscianu: %.2f\n", volume_cuboid(a, b, c));
}
*/

/* Funkcja obliczajaca objetosc walca */
float volume_cylinder(float r, float h) {
    return 3.14159f * r * r * h;
}

/* Funkcja wczytujaca dane i wyswietlajaca wynik */
void calculate_volume_cylinder() {
    float r, h;

    printf("Podaj promien podstawy walca: ");
    scanf("%f", &r);

    printf("Podaj wysokosc walca: ");
    scanf("%f", &h);

    printf("Objetosc walca: %.2f\n", volume_cylinder(r, h));
}

int main() {
    calculate_volume_cylinder();
    return 0;
}
