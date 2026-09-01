#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Digite três números inteiros (separados por espaço): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 <= n2 && n1 <= n3) {
        printf("O menor número é: %d\n", n1);
    } 
    else if (n2 <= n1 && n2 <= n3) {
        printf("O menor número é: %d\n", n2);
    } 
    else {
        printf("O menor número é: %d\n", n3);
    }

    return 0;
}