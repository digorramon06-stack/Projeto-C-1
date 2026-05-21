#include <stdio.h>

int main() {
    float notas[8];
    float frequencia[8];
    int c;

    int aprovados = 0;
    int reprovados = 0;

    float maiorNota = 0;

    for(c = 1; c < 9; c++){
        printf("Digite a Nota do Aluno %d: ", c);
        scanf("%f", &notas[c]);
        printf("Digite a Frequência do Aluno %d: ", c);
        scanf("%f", &frequencia[c]);
        
        if(notas[c] > maiorNota){
            maiorNota = notas[c];
        }
        else{
            
        }
         if(notas[c] >= 7 && frequencia[c] >= 75){
             aprovados++;
         }
         else{
             reprovados++;
         }
}
   printf("\nAPROVADOS: %d", aprovados);
   printf("\nREPROVADOS: %d", reprovados);
   printf("\nMAIOR NOTA: %.2f", maiorNota);

    return 0;
}
