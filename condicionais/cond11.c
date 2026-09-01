#include <stdio.h>

int main(){
    float valor;
    
    printf("Valor do pedido: ");
    scanf("%f", &valor);

    valor >= 200 ? printf("Frete gratis\n") : printf("Frete cobrado\n");

    valor >= 200 ? printf("Valor do frete: R$ 0.00\n") : printf("Valor do frete: R$ 25.00\n");

    return 0;
}