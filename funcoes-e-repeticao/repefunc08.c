#include <stdio.h>

int main() {
    int a, b, n1, n2, resto, mdc, mmc;

    printf("Digite dois números: ");
    scanf("%d %d", &a, &b);

    n1 = a;
    n2 = b;

    while (n2 != 0) {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }

    mdc = n1;
    mmc = (a * b) / mdc;

    printf("%d\n%d\n", mdc, mmc);

    return 0;
}