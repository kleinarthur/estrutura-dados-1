#include <stdio.h>


void fibonacci(int n){
    int f1 = 1, f2 = 1, next;

    for(int i=1; i<=n; i++){
        if (i == 1 || i == 2){
            printf("1\n");
        }
        else{
            next = f1 + f2;
            printf("%d\n", next);
            f1 = f2;
            f2 = next;
        }
    }
}

int main(){
    int n;
    printf("Escreva um inteiro positivo: ");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}