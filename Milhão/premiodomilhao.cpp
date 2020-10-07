//exercício em https://neps.academy/lesson/134

#include <iostream>

using namespace std;

int main (){
	int N,dias1=1,dias2=0,A,AC=0;//N é o número de dias, dias 1 conta os dias até o momento de chegar a um milhão , dias2 pega o dia certinho que deu 1 milhão, A pega o valor e AC acumula o A 
	cin >> N;
	
	for(N;N>0;N--,dias1++){
		cin >> A;
		AC+=A;
		if(AC>=1000000 && dias2==0)//Verifica se chegou ou não ao 1000000
			dias2=dias1;
	}
	
	cout << dias2;
	return 0;
}
