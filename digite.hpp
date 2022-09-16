#include <iostream>
#include <string>
#define N 13  /* tamanho do vetor */

using namespace std;




//Metodo delegado a mensagem
void exibir(char numeroIdentificacao[N]){
  cout << "\n[ >> ] - Infome o numero do titulo do eleitor\n";
    cout << "[ ";
    
  for(int linha=0 ; linha < N; linha++){
       cout << numeroIdentificacao[linha] << " ";
     }
      cout << " ]";
    
        
}
 /* Mascara de apresentação  */
void tituloMascara(char numeroIdentificacao[N]){
   
    for(int linha=0 ; linha < N; linha++){
       numeroIdentificacao[linha] = '_';
    }
   
}


