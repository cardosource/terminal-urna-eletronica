#include <iostream>
#include <string>
#define N 13

using namespace std;





void exibir(char numeroIdentificacao[N]){
  cout << "\n[ >> ] - Infome o numero do titulo do eleitor\n";
    cout << "[ ";
    
  for(int linha=0 ; linha < N; linha++){
       cout << numeroIdentificacao[linha] << " ";
     }
      cout << " ]";
    
        
}

void tituloMascara(char numeroIdentificacao[N]){
   
    for(int linha=0 ; linha < N; linha++){
       numeroIdentificacao[linha] = '_';
    }
   
}


