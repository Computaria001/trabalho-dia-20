#include <stdio.h>

int main() {
    int carrosVendidos;
    
    float valorTotalVendas, salarioFixo, comissaoPorCarro, salarioFinal;
    
    printf("Digite o numero de carros vendidos: ");
    
    scanf("%d", &carrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    
    scanf("%f", &valorTotalVendas);
    
    printf("Digite o salario fixo: ");
    
    scanf("%f", &salarioFixo);
    
    printf("Digite a comissao por carro vendido: ");
    
    scanf("%f", &comissaoPorCarro);
    
    salarioFinal = salarioFixo + (carrosVendidos * comissaoPorCarro) + (valorTotalVendas * 0.05);
    
    printf("O salario final do vendedor e: %.2f\n", salarioFinal);
    return 0;
}
