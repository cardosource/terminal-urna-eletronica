#include <iostream>
#include <string>

#include "digite.h"                /* Entrada padrão e mascara do campo titulo  */
#include "entrada.h"              /* Responsavel pela identificação dos eleitores  */
#include "zeressima.h"           /* imprima todos candidatos, sem nenhum voto   */
#include "registro_mesarios.h"  /* Arquivo de registro de messarios  */

#define SECAO 234               /* Sessão modelo  */
#define ZONA 123               /* Zona eleitoral  */
#define UF MT                 /* União deferativa */
#define N 13                                             //tamanho do array de char
using namespace std;
char numeroIdentificacao[N];                              // Array para o titulo

void limparTela(){
    system("clear");
}


/*-----------Metodo destinado a cadastrar titulo--------------*/
void titulo_eleitor(){
     int tituloEleitor=0;
     char numeroTitulo;
      tituloMascara(numeroIdentificacao);                    // mascara demostrativa: [ _ _ _ _ _ _ _ _ _ _ ]
     while (tituloEleitor < sizeof(numeroIdentificacao) ) { //  percorre o array   
        limparTela();                                       //  mantera tela limpa
           exibir(numeroIdentificacao);                    //   mostre valores digitados
          
          cout << "\n= ";
          cin >> numeroTitulo;                            // input, entrada da informação
          
          numeroIdentificacao[tituloEleitor] = numeroTitulo; //adiciona ao array a entrada informada
          tituloEleitor++;                               
        }
      terminal(numeroIdentificacao );                      //metodo mostre os eleitores da sessão, averigua se pertence a sessao
     }




//------------------- Metodo main --------------------------
int main(){
    string cadidato[4][5]; 
  int preparativos;
  cout << "Imprimir Zeressima\n";
    cout <<
     "\n  --------------- \n"<<
      "/  CONFIRMAR   / \n" <<
       "--------------- \n"<<
      "1- confirmar\n";
      cin >> preparativos; 
  if (preparativos ==1 ) {
    
    zeressima(cadidato);

    

  } 
   cout << "\n-----------------------------------------------";
   cout << "\nRegistrar Messarios\n";
   cout << "-----------------------------------------------\n";
  cout <<
     "\n  --------------- \n"<<
      "/  CONFIRMAR   / \n" <<
       "--------------- \n"<<
      "1- confirmar\n";
    cin >> preparativos; 
   if (preparativos == 1) {
    registro_mesarios();
   //titulo_eleitor();

  }
   cout << "\n-----------------------------------------------";
  cout << "\nIniciar Trabalhos\n";
   cout << "-----------------------------------------------\n";
  cout <<
     "\n  --------------- \n"<<
      "/  CONFIRMAR   / \n" <<
       "--------------- \n"<<
      "1- confirmar\n";
    cin >> preparativos; 
   if (preparativos == 1) {
     void (*ponteirinho)(void);
       ponteirinho = titulo_eleitor;
       (* ponteirinho)();

  }
  
    
  
    return 0;
}
