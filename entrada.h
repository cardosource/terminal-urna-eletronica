#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <new>
#include <iomanip>
#include <unistd.h>

#include "tempo.h"      /* tempo estimado para terminal a votação */
#include "escolha.h"   /* mensagen confirmar, cancelar */  
using namespace std;


ifstream indata;
bool pertence_acessao = false;

/* Metodo status atual na votação em andamento */
bool status(bool eleitor){
      int liberar;
      int justificacao;
      int correcao;
   
    cout << "\n--------------------------------------------------";
    if(eleitor == true){                                       /* eleitor na urna */
        cout << "\nEleitor pronto para votar : \n" ;
        pressBt();                                            /* liberar urna */
     
        cin >> liberar;
        cout << "\n";
        if( liberar == 1){
            cout << "[ + ] - Eleitor Votando\n\n";
            tempo_votacao_similacao();                     /* tempo estimado para terminal a votação */
            
        }else{
            cout << "[ -  ] - Voto cancelado.\n";


        }
        
    }else{
         cout << "\nEleitor não pertencer a essa sessão :  \n";  /*eleitor não corresponde a lista de eleitores na sessão */
         pressBt();
         cout << "\n= ";
         cin >> justificacao;                                  /* justificar  */
         
        
            if( justificacao == 1){
                int justificativa_numero;
                srand( time(NULL) );
                justificativa_numero = (( rand() % 33 ) + ( rand() % 33 ) * ( rand() % 33) * ( rand() * 33) * (rand() % 33 )) + 1; /* código de justificação */
                cout << "--------------------------------------------------\n";
                cout << "Código = " << abs(justificativa_numero) <<"\n";
                cout << "--------------------------------------------------\n\n";               
            }
    
    }
          return true;
}

/* Metodo responsavel por identificar eleitor */
void  terminal(string numero_titulo){
    struct tituloEleitor {
    string nome;
    string titulo;
    string sessao;
    string zona;
    string uf;

};
    indata.open("eleitores.csv");                             /* eleitores da sessão */
    tituloEleitor *ponteirotituloEleitor = new tituloEleitor;
    string linha;

while (std::getline(indata, linha)) {
    istringstream iss(linha);
    getline(iss, ponteirotituloEleitor->nome, ',');
    getline(iss, ponteirotituloEleitor->titulo, ',');
    getline(iss, ponteirotituloEleitor->sessao, ',');
    getline(iss, ponteirotituloEleitor->zona, ',');
    getline(iss, ponteirotituloEleitor->uf, ',');
   
    if(numero_titulo ==  ponteirotituloEleitor->titulo){     /* Eleitor pertence a sessão... */
        cout << "\n" << ponteirotituloEleitor->nome << "  " << ponteirotituloEleitor->titulo;
        cout << "\nSessão : " << ponteirotituloEleitor->sessao << "\nZona : " << ponteirotituloEleitor->zona  << "\nUf : " << ponteirotituloEleitor->uf;
        pertence_acessao = true;
        break;
    }
    
    
}
   status(pertence_acessao); /* verifica se pertence */

}
