#include <cstdio>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#define L 4
#define C 5

using namespace std;
string cadidato[L][C];

ofstream gravar;

/* Meotodo responsavel por mostrar que não há votos predeterminados antes de iniciar as votações */
 void parlamentares(){
      cadidato[0][0] = "Candidato X";               /* Modelo; nome,partido cargo, voto atual, numero do candidato */
      cadidato[0][1] = "partido X";
      cadidato[0][2] = "Presidente da República";
      cadidato[0][3] = "voto : 0 ";
      cadidato[0][4] = "111";

      cadidato[1][0] = "Candidato Y";
      cadidato[1][1] = "partido Y";
      cadidato[1][2] = "Governador";
      cadidato[1][3] = "voto : 0 ";
      cadidato[1][4] = "222";



      cadidato[2][0] = "Candidato Z";
      cadidato[2][1] = "partido Z";
      cadidato[2][2] = "Senador";
      cadidato[2][3] = "voto : 0 ";
      cadidato[2][4] = "333";


      cadidato[3][0] = "Candidato L";
      cadidato[3][1] = "partido L";
      cadidato[3][2] = "Deputado Distrital";
      cadidato[3][3] = "voto : 0 ";
      cadidato[3][4] = "444";


 }

void zeressima(string cadidato[L][C]){
    cout << "\n-----------------------------------------------\n" <<
    "[ ZERESSIMA ]\n" <<
     "-----------------------------------------------\n";
    
    gravar.open("zeressima.csv", ios::app);
    gravar << "CANDIDATO,CARGO,NUMERO,VOTO" << endl;
    
    for(int l=0; l < L ;l++){
             for(int c=0; c < C ;c++){
                if (c ==0 || c ==2 || c ==3 || c ==4){   /* informação simplificada */
                    gravar << cadidato[l][0] << " , " << cadidato[l][2] << " , " <<cadidato[l][4] <<"  , " << cadidato[l][3] << endl;
                    break;
                   

                }
                
             }
    
        }
        cout << "- [ IMPRESSÃO CONCLUIDA ]\n\n";
         

}
