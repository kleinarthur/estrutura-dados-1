#include <stdio.h>

int main(){
    int c = 0;
    float kg = 0;
    float peso = 0;
    while(1){
        printf("Digite o peso em kg | valor negativo p/ sair: ");
        scanf("%f", &kg);
        if (kg < 0){
            break;
        }
        else{
            c++;
            peso += kg;
        }
    }
    if (c > 0){
        printf("Quantidade de lotes registrados: %d\nPeso total: %.2f\nPeso médio: %.2f\n", c, peso, peso / c);
    }
    else{
        printf("Nenhum lote registrado.\n");
    }
    return 0;
}