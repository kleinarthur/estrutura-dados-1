#include <stdio.h>

int main(){

    float consumo;
    printf("Consumo mensal de água: ");
    scanf("%f", &consumo);

    if (consumo > 15) {

        float taxa = (consumo - 15) * 9.8;
        printf("Valor da taxa excedente: %.2f\n", taxa);       
    }
    else
        printf("Consumo dentro da franquia\n");

    return 0;
}