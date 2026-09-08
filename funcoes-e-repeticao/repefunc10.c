#include <stdio.h>

float pow(float a, int b){
    float result = a;
    for (int i = 2; i <= b; i++){
        result *= a;
    }

    return result;
}

int main(){
    float n1;
    int n2;
    printf("Digite dois números no formato (Nreal Ninteiro): ");
    scanf("%f %d", &n1, &n2);
    printf("%.2f\n", pow(n1, n2));
    
    return 0;
}