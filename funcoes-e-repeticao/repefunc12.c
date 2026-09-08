#include <stdio.h>

int inverter(int num) {
    int invertido = 0;
    int resto;

    while (num != 0) {
        resto = num % 10;
        invertido = (invertido * 10) + resto;
        num = num / 10;
    }

    return invertido;
}

int eh_palindromo(int num) {

    if (num == inverter(num)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite apenas números positivos.\n");
    } else {
        printf("Número invertido: %d\n", inverter(n));

        if (eh_palindromo(n)) {
            printf("O número %d é um palíndromo!\n", n);
        } else {
            printf("O número %d não é um palíndromo.\n", n);
        }
    }

    return 0;
}