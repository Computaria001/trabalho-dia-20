#include <stdio.h>

int main() {
    int num;
    
	printf("Digite um numero: ");
    
	scanf("%d", &num);
    
	printf("O antecessor de %d e %d\n", num, num - 1);
    return 0;
}
