#include <iostream>
#include <string>

#include "digite.h"
#include "entrada.h"
#include "zeressima.h"
#include "registro_mesarios.h"

#define SECAO 234
#define ZONA 123
#define UF MT
#define N 13
using namespace std;
char numeroIdentificacao[N];

void limparTela(){
    system("clear");
}



void titulo_eleitor(){
     int tituloEleitor=0;
     char numeroTitulo;
      tituloMascara(numeroIdentificacao);
     while (tituloEleitor < sizeof(numeroIdentificacao) ) { 
        limparTela();
           exibir(numeroIdentificacao);
          
          cout << "\n= ";
          cin >> numeroTitulo;
          
          numeroIdentificacao[tituloEleitor] = numeroTitulo;
          tituloEleitor++;
        }
      terminal(numeroIdentificacao );
     }

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