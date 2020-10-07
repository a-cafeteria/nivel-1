//exercíco em https://neps.academy/lesson/134

#include <stdio.h>

int main (){
	int N,dias1=1,dias2=0,A,AC=0;//N é o númerod e dias, dias 1 conta os dias até o momento de chegar a um milhão , dias2 pega o dia certinho que deu 1 milhão, A pega o valor e AC acumula o A 
	scanf("%d",&N);
	
	for(N;N>0;N--,dias1++){
		scanf("%d",&A);
		AC+=A;
		if(AC>=1000000 && dias2==0)//Verifica se chegou ou não ao 1000000
			dias2=dias1;
	}
	
	printf("%d",dias2);
	return 0;
}
