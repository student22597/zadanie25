#include <stdio.h>
#include <stdio.h>

/* ===== PROSTOPADLOSCIAN ===== */
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

/* ===== WALec ===== */
float volume_cylinder(float r, float h) {
    return 3.14159f * r * r * h;
}

void calculate_volume_cylinder() {
    float r, h;

    printf("Podaj promien podstawy walca: ");
    scanf("%f", &r);

    printf("Podaj wysokosc walca: ");
    scanf("%f", &h);

    printf("Objetosc walca: %.2f\n", volume_cylinder(r, h));
}

/* ===== MAIN ===== */
int main() {
    int choice;

    printf("=== MENU OBJETOSCI BRYL ===\n");
    printf("1. Prostopadloscian\n");
    printf("2. Walec\n");
    printf("Wybierz opcje: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calculate_volume_cuboid();
            break;
        case 2:
            calculate_volume_cylinder();
            break;
        default:
            printf("Nieprawidlowy wybor!\n");
    }

    return 0;
}
