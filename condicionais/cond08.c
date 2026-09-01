#include <stdio.h>

int main() {
    float lado_x, lado_y, lado_z;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &lado_x, &lado_y, &lado_z);

    if ((lado_x + lado_y > lado_z) && (lado_x + lado_z > lado_y) && (lado_y + lado_z > lado_x)) {
        if (lado_x == lado_y && lado_y == lado_z) {
            printf("Triangulo Equilatero\n");
        }
        else if (lado_x == lado_y || lado_x == lado_z || lado_y == lado_z) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }
    }
    else {
        printf("Os valores nao formam um triangulo valido.\n");
    }

    return 0;
}
