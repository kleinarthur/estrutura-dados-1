#include <stdio.h>

void mdc(int a, int b){
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("mdc = %d\n", a);
}

int main(){
    int n1, n2;
    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);
    mdc(n1, n2);

    return 0;
}