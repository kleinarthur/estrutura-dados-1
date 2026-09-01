#include <stdio.h>

int main(){

    char tipo;
    float valor;
    printf("Valor da compra: ");
    scanf("%f", &valor);

    printf("Tipo de cliente (A ou V): ");
    scanf(" %c", &tipo);

    if (valor >= 150){
        if (tipo == 'V')
            printf("Frete grátis! Total: R$%.2f\n", valor);
        else
            printf("Frete grátis e 10 porcento de desconto! Total: R$%.2f\n", valor * 0.9);
    }
    else {
        if (tipo == 'V')
            printf("Frete de R$19.90! Total: R$%.2f\n", valor + 19.90);
        else
            printf("Frete de R$9.95! Total: R$%.2f\n", valor + 9.95);
    }

    return 0;
}