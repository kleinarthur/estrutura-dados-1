#include <stdio.h>

int main() {
    int idade, ehterca;
    float valor = 30.00;

    printf("Digite a idade do visitante: ");
    scanf("%d", &idade);

    printf("É terça-feira? (1 para sim, 0 para não): ");
    scanf("%d", &ehterca);

    if (ehterca) {
        if (idade < 6)
            printf("Valor total: Gratuito.\n");
        else if ((idade >= 6 && idade <= 17) || idade > 60)
            printf("Valor total: R$%.2f (Meia com desconto).\n", valor / 2 * 0.6);
        else
            printf("Valor total: R$%.2f (Inteira com desconto).\n", valor * 0.6);
    }
    else {
        if (idade < 6)
            printf("Valor total: Gratuito.\n");
        else if ((idade >= 6 && idade <= 17) || idade > 60)
            printf("Valor total: R$%.2f (Meia normal).\n", valor / 2);
        else
            printf("Valor total: R$%.2f (Inteira normal).\n", valor);
    }

    return 0;
}