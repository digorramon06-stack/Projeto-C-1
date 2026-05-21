#include <stdio.h>

int main() {
int c;
float p[8], q[8];
    for(c = 1; c < 9; c++){
        printf("Digite a Nota Final do Aluno %d: ", c);
        scanf("%f", &p[c]);
        printf("Digite a Frequência em Percentual do Aluno %d: ", c);
        scanf("%f", &q[c]);
    }
    for(c = 1; c < 9; c++){
        printf("\nALUNO %i: ", c);
        printf("\nNota: %.2f", p[c]);
        printf("\nFrequência: %.2f\n", q[c]);
        if(p[c] >= 7 && q[c] >= 75){
            printf("APROVADO\n");
        }
        else{
            printf("REPROVADO\n");
        }
    }
   
   // p | q | p && q
   // V | V | V
   // V | F | F
   // F | V | F
   // F | F | F
   
   return 0;
}
