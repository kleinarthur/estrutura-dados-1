#include <stdio.h>

int main() {
    float kg, fixo, franquia, extra, total;
    int envio, socio;

    printf("Peso da encomenda (kg): ");
    scanf("%f", &kg);

    if (kg <= 0) {
        printf("Peso invalido\n");
        return 0;
    }

    printf("Modalidade (1-Padrao, 2-Expressa, 3-Premium): ");
    scanf("%d", &envio);

    printf("Possui plano de assinatura? (1-Sim, 0-Nao): ");
    scanf("%d", &socio);

    if (envio == 1) {
        fixo = 18.00;
        franquia = 5.00;
        extra = 6.50;
    }
    else if (envio == 2) {
        fixo = 35.00;
        franquia = 10.00;
        extra = 4.00;
    }
    else {
        fixo = 60.00;
        franquia = 20.00;
        extra = 2.50;
    }

    if (socio == 1) {
        franquia = franquia + 5.00;
    }

    if (kg > franquia) {
        total = fixo + ((kg - franquia) * extra);
    }
    else {
        total = fixo;
    }

    printf("Valor do envio: R$ %.2f\n", total);

    return 0;
}
