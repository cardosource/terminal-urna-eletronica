#include <iostream>
#include <cstdlib>
#include <ostream>
#include <unistd.h>
#include <string>
#define  CODIGO 555
using namespace std;



void limpa(){
     system("clear");  
}


/* informativo de voto em andamento */
void tempovotacao(int hr, int minutos, int segundos) {
   
   cout << "Eleitor Votando "<<
         hr << ":"
        << minutos << ":"
        << segundos << endl;

       
}

/* metodo detempo estimado para votação */
void tempo_votacao_similacao(){

int hr =0;
int min = 0;
int sec = 0;
bool coontagem = true;
int  confirmar, corrigir;

while(coontagem) {
    sleep(2);
     sec++;

    if(sec > 59) {
      min++;
      sec = 0;
    } 

    if(min > 59) {
      hr++;
      sec = 0;
      min = 0;
      
    }
    if (sec == 7) {                                        /* modelo minimo, de tempo ultrapassado */
    cout <<"Eleitor  esta demorando\n" <<
 
     "\n  --------------- " "---------------\n"<<
      "/  CONFIRMAR   /" << "/  CORRIGIR   /" << "\n" <<
       "--------------- "<<  "---------------\n"<<
      "1- confirmar\n"<<
      "2- corrigir\n";
      cin >> confirmar;

      if(confirmar == 1){                               /* messário dispoem para ajuda e informa que esta demorando e se esta precisando de auxilio */
        continue;

      }
      
   
    }

     if(sec ==15){                                    /* tempo adicionar */
     cout <<"Eleitor esta demorando\n\n" <<
     "\n  --------------- " "---------------\n"<<
      "/  CONFIRMAR   /" << "/  CORRIGIR   /" << "\n" <<
       "--------------- "<<  "---------------\n"<<
      "1- confirmar\n"<<
      "2- corrigir\n";
      cin >> confirmar;                                /* na circunstancias o eleitor sai da cabine ou não sabe mais e quer se abdicar da escolha */
      if(confirmar == 2){
         cout <<"Digite o código de suspensão\n\n: ";  /* gerar suspensão parcial do voto */   
         cin >> corrigir;
         if(corrigir == CODIGO){
             cout <<"[ !! ] - Voto Parcial..\n\n : ";
   
              coontagem= false;

         }

      }else {
        cout <<"[ !! ] - Voto concluido..\n\n : ";   /* ocorreu tudo bem, eleitor terminou e não houve cancelamento ou suspensssão */
        coontagem= false;
      }
     }
        
    
    tempovotacao(hr, min, sec);                 /* mensagem de tempo passando */
    sleep(2);
    system("clear");  
   
  }
}
