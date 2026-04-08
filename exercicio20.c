#include <stdio.h>

int main() {
    float altura;
    
    scanf("%f", &altura);

    float peso_ideal_homem = 72.7 * altura - 58;
    float peso_ideal_mulher = 62.1 * altura - 44.7;    

    printf("%.2f %.2f", peso_ideal_homem, peso_ideal_mulher);

    return 0;
    
}