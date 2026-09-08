#include <stdio.h>
#include <math.h>

void exibirMenu() {
    printf("\n ---- CALCULADORA ----\n");
    printf("1.Soma\n");
    printf("2.Subtracao\n");
    printf("3.Multiplicacao\n");
    printf("4.Divisao\n");
    printf("5.Potenciacao\n");
    printf("6.Sair\n");
}

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

double potenciar(double base, double expoente) {
    return pow(base, expoente);
}

int main() {
    int opcao;
    float num1, num2;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", somar(num1, num2));
                break;
            case 2:
                printf("Resultado: %.2f\n", subtrair(num1, num2));
                break;
            case 3:
                printf("Resultado: %.2f\n", multiplicar(num1, num2));
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisao por zero nao permitida!\n");
                } else {
                    printf("Resultado: %.2f\n", dividir(num1, num2));
                }
                break;
            case 5:
                printf("Resultado: %.2f\n", potenciar(num1, num2));
                break;
            case 6:
                printf("\n----------Programa encerrado----------\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 6);

    return 0;
}