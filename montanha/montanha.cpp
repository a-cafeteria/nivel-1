// OBI 2016 - Montanha (Nível 1)
// Enunciado: https://olimpiada.ic.unicamp.br/prova/testef1/resultado/montanha/

#include <bits/stdc++.h>
using namespace std;
int M[1010];
int main(int argc, char const *argv[]) {
int N;
cin>>N;
for(int i=0;i<N;i++)cin>>M[i]; //salvo a sequência
for(int i=0;i<N-3;i++){//vou analisar de i até i+2, então i tem que ser menor que N-3
if(M[i+1]<M[i]&&M[i+1]<M[i+2]){ //analiso de 3 em 3: se o numero do meio for menor que os dois da ponta, então
  cout<<"S";                    //existe um pico e eu posso finalizar o programa
  return 0;
}
}
  cout<<"N"; //se o if nao foi ativado, nenhum pico existe
  return 0;
}
