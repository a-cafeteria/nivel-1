//exerc�co em https://neps.academy/lesson/134

#include <iostream>

using namespace std;

int main (){
	int N,dias1=1,dias2=0,A,AC=0;//N � o n�merod e dias, dias 1 conta os dias at� o momento de chegar a um milh�o , dias2 pega o dia certinho que deu 1 milh�o, A pega o valor e AC acumula o A 
	cin >> N;
	
	for(N;N>0;N--,dias1++){
		cin >> A;
		AC+=A;
		if(AC>=1000000 && dias2==0)//Verifica se chegou ou n�o ao 1000000
			dias2=dias1;
	}
	
	cout << dias2;
	return 0;
}
