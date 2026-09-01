#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;

    printf("Digite a, b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0)
        printf("x = %.2f.\n", -c / b);
    else if ((b * b - 4 * a * c) < 0)
        printf("Sem solução real.\n");
    else if ((b * b - 4 * a * c) == 0)
        printf("x = %.2f.\n", -b / (2 * a));
    else {
        if ((b * b - 4 * a * c) > 0) {
            printf("x1 = %.2f.\n", (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
            printf("x2 = %.2f.\n", (-b - sqrt(b * b - 4 * a * c)) / (2 * a)); // Ajustado para x2
        } 
    } 

    return 0;
} 
