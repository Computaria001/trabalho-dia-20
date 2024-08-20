#include <stdio.h>

int main() {
    float nota1, nota2, nota3, mediaFinal;
    
    printf("Digite as tres notas: ");
    
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    mediaFinal = (2 * nota1 + 3 * nota2 + 5 * nota3) / 10;
    
    printf("A media final e: %.2f\n", mediaFinal);
    return 0;
}
