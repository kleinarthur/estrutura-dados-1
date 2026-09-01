#include <stdio.h>

int main() {
    char jg_a, jg_b;

    printf("Jogador A - Escolha (R-Pedra, P-Papel, S-Tesoura): ");
    scanf(" %c", &jg_a);

    printf("Jogador B - Escolha (R-Pedra, P-Papel, S-Tesoura): ");
    scanf(" %c", &jg_b);

    if (jg_a == jg_b) {
        printf("Empate!\n");
    } 
    else {
        switch (jg_a) {
            case 'R':
                if (jg_b == 'S') {
                    printf("Jogador A venceu! (Pedra quebra Tesoura)\n");
                } else {
                    printf("Jogador B venceu! (Papel cobre Pedra)\n");
                }
                break;

            case 'P':
                if (jg_b == 'R') {
                    printf("Jogador A venceu! (Papel cobre Pedra)\n");
                } else {
                    printf("Jogador B venceu! (Tesoura corta Papel)\n");
                }
                break;

            case 'S':
                if (jg_b == 'P') {
                    printf("Jogador A venceu! (Tesoura corta Papel)\n");
                } else {
                    printf("Jogador B venceu! (Pedra quebra Tesoura)\n");
                }
                break;

            default:
                printf("Escolha invalida do Jogador A.\n");
        }
    }

    return 0;
}
