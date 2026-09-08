#include <stdio.h>

int main(){
    int n;

    while(1){
        printf("Escreva um inteiro positivo | Múltipoo de 9 para sair: ");
        scanf("%d", &n);
        if (n % 9 == 0)
            break;
        n % 5 == 0 ? printf("%d é múltiplo de 5!\n", n) : printf("%d não é múltiplo de 5!\n", n);
}   
    return 0;
}