#include <stdio.h>

int main(){
    int multiplicador, colunas=0, primeiro_numero=0; /* multiplicador � o numero de 1 a 10 que mmutiplicar� o "primeiro n�mero",
    colunas s�o as colunas de cada n�mero, e primeiro_numero � o n�mero que ser� multiplicado*/

    for(colunas=0; colunas < 10; colunas++){ //calcular o valor entre as colunas
        for(multiplicador=1; multiplicador <= 10; multiplicador++){
            printf("%d x %d = %d\n", primeiro_numero, multiplicador, primeiro_numero*multiplicador);
        }
        primeiro_numero++;
        printf("\n \n");
    }

    return 0;
}
