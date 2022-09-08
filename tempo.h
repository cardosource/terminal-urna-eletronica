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
void tempovotacao(int hr, int minutos, int segundos) {
   
   cout << "Eleitor Votando "<<
         hr << ":"
        << minutos << ":"
        << segundos << endl;

       
}


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
    if (sec == 7) {
    cout <<"Eleitor  esta demorando\n" <<
 
     "\n  --------------- " "---------------\n"<<
      "/  CONFIRMAR   /" << "/  CORRIGIR   /" << "\n" <<
       "--------------- "<<  "---------------\n"<<
      "1- confirmar\n"<<
      "2- corrigir\n";
      cin >> confirmar;

      if(confirmar == 1){
        continue;

      }
      
   
    }

     if(sec ==15){
     cout <<"Eleitor esta demorando\n\n" <<
     "\n  --------------- " "---------------\n"<<
      "/  CONFIRMAR   /" << "/  CORRIGIR   /" << "\n" <<
       "--------------- "<<  "---------------\n"<<
      "1- confirmar\n"<<
      "2- corrigir\n";
      cin >> confirmar;
      if(confirmar == 2){
         cout <<"Digite o código de suspensão\n\n: ";
         cin >> corrigir;
         if(corrigir == CODIGO){
             cout <<"[ !! ] - Voto Parcial..\n\n : ";
   
              coontagem= false;

         }

      }else {
        cout <<"[ !! ] - Voto concluido..\n\n : ";
        coontagem= false;
      }
     }
        
    
    tempovotacao(hr, min, sec);
    sleep(2);
    system("clear");  
   
  }
}