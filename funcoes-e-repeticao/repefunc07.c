#include <stdio.h>

int main(){
    int n;
    float preco_atual, percentual, novo_preco;
    float maior_novo_preco = 0.0;
    printf("Escreva a quantidade de produtos: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("Produto %d\n", i);
        
        printf("Digite o preço atual: R$");
        scanf("%f", &preco_atual);
        
        printf("Digite o acrécimo em porcentagem: ");
        scanf("%f", &percentual);

        novo_preco = preco_atual * ((100 + percentual) / 100);
        printf("Novo preço do produto %d: R$%.2f\n\n", i, novo_preco);

        if (novo_preco > maior_novo_preco) {
            maior_novo_preco = novo_preco;
        }
    }

    printf("O maior novo preço cadastrado é: R$%.2f\n", maior_novo_preco);

    return 0;
}
