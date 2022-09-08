#include <iostream>
#include <string>

using namespace std;
string mesarios[4][2];
void registro_mesarios(){
    int confirmar;
    string titulo_mesario;
    
    mesarios[0][0]= "Presidente ";
    mesarios[0][1]= "_ _ _ _ _ _";

    mesarios[1][0]= "Primeiro Mesário ";
    mesarios[1][1]= "_ _ _ _ _ _";

    mesarios[2][0]= "Segundo Mesário ";
    mesarios[2][1]= "_ _ _ _ _ _";

    mesarios[3][0]= "Secretário ";
    mesarios[3][1]= "_ _ _ _ _ _";
 

    

    for(int l=0; l < 4 ;l++){
         for(int c=0; c < 2 ;c++){
       
         
        if(c ==1){
            cout << "Informe o titulo : "<< mesarios[l][0] << "\n: ";
            
            cin >> titulo_mesario;
                mesarios[l][c] =titulo_mesario;
            
            
           
        }
         
    }
    cout << "\n";
   
}

for(int l=0; l < 4 ;l++){
         for(int c=0; c < 2 ;c++){
             cout<< mesarios[l][c];
         }
          cout << "\n";
}
 
}