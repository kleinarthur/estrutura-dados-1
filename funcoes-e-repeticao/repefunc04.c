#include <stdio.h>

int main(){
    int n = 0;
    int f1 = 1, f2 = 1, next;
    printf("Escreva um inteiro positivo: ");
    scanf("%d", &n);

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

    return 0;

}