#include <stdio.h>

int fatorial(int n){
    int fat = 1;

    if (n == 0){
        fat = 1;
    } else{
    for (int i = 2; i <= n; i++){
        fat *= i;
    }
    }

    return fat;
}

int combinar(int m, int n){
    int result = fatorial(m) / (fatorial(m-n) * fatorial(n)); 
    return result;
}

int main(){
    int n1, n2;
    printf("Digite dois números naturais que deseja combinar: ");
    scanf("%d %d", &n1, &n2);
    printf("Número de combinações (%d, %d): %d\n", n1, n2, combinar(n1, n2));

    return 0;
}