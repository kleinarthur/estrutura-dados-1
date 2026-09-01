#include <stdio.h>

int main(){

    float consumo;
    float taxa;
    printf("Consumo mensal de luz: ");
    scanf("%f", &consumo);

    if (consumo <= 50)
        taxa = 0.45 * consumo;    
    else if (consumo >= 51 && consumo <= 100)
        taxa = 0.68 * consumo;
    else if (consumo >= 101 && consumo <= 200)
        taxa = 0.2 * consumo;
    else if (consumo >= 201 && consumo <= 400)
        taxa = 0.95 * consumo;
    else
        taxa = 1.12 * consumo;

    printf("Consumo: %.2fkWh | Valor da conta: R$%.2f\n", consumo, taxa + 12.50);
    return 0;
}   