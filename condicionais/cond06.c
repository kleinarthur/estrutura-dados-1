#include <stdio.h>

int main() {
   
    int calA_d, calA_m, calA_a;
    int calB_d, calB_m, calB_a;

    printf("Informe a primeira data (DD MM AAAA): ");
    scanf("%d %d %d", &calA_d, &calA_m, &calA_a);

    printf("Informe a segunda data (DD MM AAAA): ");
    scanf("%d %d %d", &calB_d, &calB_m, &calB_a);

    // ANO DIFERENTE
    if (calA_a < calB_a) {
        printf("A primeira data veio antes.\n");
    }
    else if (calB_a < calA_a) {
        printf("A segunda data veio antes.\n");
    }
    else {
        // MESMO ANO: MÊS
        if (calA_m < calB_m) {
            printf("A primeira data veio antes.\n");
        }
        else if (calB_m < calA_m) {
            printf("A segunda data veio antes.\n");
        }
        else {
            // MESMO MÊS
            if (calA_d < calB_d) {
                printf("A primeira data veio antes.\n");
            }
            else if (calB_d < calA_d) {
                printf("A segunda data veio antes.\n");
            }
            else {
                printf("As duas datas sao exatamente iguais.\n");
            }
        }
    }

    return 0;
}
