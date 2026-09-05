#include <stdio.h>

int main(){
    int n;
    int i = 2;
    printf("Escreva um inteiro positivo: ");
    scanf("%d", &n);

    while(n > 1){
        if (n % i == 0){
            printf("%d\n", i);
            n /= i;
        }
        else{
            i++;
        }
    }

    return 0;

}