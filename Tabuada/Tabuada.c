#include <stdio.h>

int main(){
    int multiplicador, colunas=0, primeiro_numero=0; /* multiplicador é o numero de 1 a 10 que mmutiplicará o "primeiro número",
    colunas são as colunas de cada número, e primeiro_numero é o número que será multiplicado*/

    for(colunas=0; colunas < 10; colunas++){ //calcular o valor entre as colunas
        for(multiplicador=1; multiplicador <= 10; multiplicador++){
            printf("%d x %d = %d\n", primeiro_numero, multiplicador, primeiro_numero*multiplicador);
        }
        primeiro_numero++;
        printf("\n \n");
    }

    return 0;
}
