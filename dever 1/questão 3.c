#include <stdio.h>

int main() {
    int anos, meses, dias, idadeDias;
    
    printf("Digite sua idade (anos, mes e dias): ");
    
    scanf("%d %d %d", &anos, &meses, &dias);
    
    idadeDias = anos * 365 + meses * 30 + dias;
    
    printf("Sua idade em dias e: %d\n", idadeDias);
    return 0;
}
