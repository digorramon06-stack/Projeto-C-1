#include <stdio.h>

int main() {
    
    float vendas[10];
    int vendaEspecial;
    int c;

    float total = 0;
    int destaque = 0;
    int comum = 0;

    for(c = 1; c < 11; c++){
        printf("\nDigite o Valor da Venda %d: R$", c);
        scanf("%f", &vendas[c]);
        printf("A Venda foi Especial? [1/0] ");
        scanf("%d", &vendaEspecial);
        if(vendas[c] >= 100 || vendaEspecial == 1){
            printf("Venda com Destaque!\n");
            destaque++;
        }
        else{
            printf("Venda Comum.");
            comum++;
        }
        total = total + vendas[c];
    }
    printf("\nTotal: %.2f", total);
    printf("\nTotal de Vendas Comuns: %d", comum);
    printf("\nTotal de Vendas com Destaque: %d", destaque);
    
   // p | q | p || q
   // V | V | V
   // V | F | v
   // F | V | v
   // F | F | F

    return 0;
}
