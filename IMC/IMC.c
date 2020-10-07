#include <stdio.h>

int main(){
    float altura, IMC, peso;

    printf("Digite o peso (Kg): "); 
    scanf("%f", &peso); //lê o valor do peso

    printf("Digite o altura (M): ");
    scanf("%f", &altura); //lê o valor da altura

    IMC = peso / (altura * altura); //faz o cálculo do IMC

    printf("IMC: %.1f\n", IMC);

    if (IMC < 18.5){
        printf("Abaixo do normal");
    }
    else if (IMC >= 18.5 && IMC <= 24.9){
        printf("Normal");
    }
    else if (IMC >= 25 && IMC <= 29.9){
        printf("Acima do Peso");
    }
    else if (IMC >= 30 && IMC <= 34.9){
        printf("Obesidade Grau 1");
    }
    else if (IMC >= 35 && IMC <= 39.9){
        printf("Obesidade Grau 2");
    }
    else if (IMC >= 40){
        printf("Obesidade Grau 3");
    }  //condição para avaliar cada nivel de EMC e sua respectiva classificação

    return 0;

}

