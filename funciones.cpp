//NOMBRE:
// Nº TP:
//EJERCICIO:
//COMENTARIO:

#include<iostream>
#include <cstdlib>
#include <ctime>
#include <string>
# include "funcion.h"
#include "rlutil.h"

using namespace std;

// Menu
     void  MENU (int N){
     rlutil:: cls();
     rlutil:: locate (2,1);
     cout << "GRAN CERDO"<<endl;
     rlutil:: locate (2,2);
     cout << "--------------------"<<endl;
     rlutil:: locate (2,3);
     cout << "1 - JUGAR"<<endl;
     rlutil:: locate (2,4);
     cout << "2 - ESTADISTICAS"<<endl;
     rlutil:: locate (2,5);
     cout << "3 - CERDITOS"<<endl;
     rlutil:: locate (2,6);
     cout << "---------------------"<<endl;
     rlutil:: locate (2,7);
     cout << "0 - SALIR"<<endl;
     }
//valor dado

void DadoJ1 (int &d1,int &d2){
     srand (time(NULL));
     d1 = (rand()%6)+1;
     d2 = (rand()%6)+1;
     cout << d1 << "  " << d2 ;
}
void DadoJ2 (int &d3, int &d4){
     d3 = (rand()%6)+1;
     d4 = (rand()%6)+1;
     cout << d3 << "  " << d4 ;
}
void DadoJuegox2 (int &D1, int &D2){
     D1 = (rand()%6)+1;
     D2 = (rand()%6)+1;
     cout << D1 << "  " << D2 ;
}
void DadoJuegox3 (int &D3, int &D4, int &D5){
     D3 = (rand()%6)+1;
     D4 = (rand()%6)+1;
     D5 = (rand()%6)+1;
     cout << D3 << "  " << D4 << "  "<< D5;
}

// quien empieza
bool QuienEmpieza (int a1, int a2, int D1_J1,int D2_J1,int D1_J2,int D2_J2){
          if (a1>a2){
               return true;
          }
          else{
               return false;
          }
          if (a1==a2){
               if (D1_J1>D1_J2|| D2_J1>D2_J2){
                    return true;
               }
               else{
                    return false;
               }
          }

     }
// JUEGO
void DatosRond(int a, int AcumRond, int Lan){
     cout << endl << "-----------------------------------------"<< endl;
     cout <<  "RONDAS#"<<a<<endl;
     cout << "TRUFAS DE LA RONDA: "<< AcumRond << endl;
     cout <<  "LANZAMIENTOS: "<<Lan <<endl;
     cout << "-----------------------------------------"<< endl;

     cout << "LANZAMIENTO#:" << Lan+1<<endl;
     cout << endl<< "PULSE ENTER PARA TIRAR LOS DADOS"<< endl;
     rlutil:: anykey();
}
//REGLAS DADOS
int SumaDados (int d1, int d2,bool cont){
if (d1 != d2){
     return d1+d2;
}

 else   if (d1==d2){
          cout <<endl << " ¡OINK! " << endl;
          return (d1+d2)*2;
          return true;
     }

}

int Mal_Tiro(int d1, int d2, bool cont){
if (d1==1 || d2 == 1){
     cout << endl<< "PERDES LAS TRUFAS DE LA RONDA :("<<endl;
     return 0;
}
if (d1== 1 && d2==1){
     cout << endl<< "TE HUNDISTE EN EL BARRO :("<<endl;
     return 0;
     return false;
}
}



// CONTINUAR

bool CONTINUAR (char CONTI,bool CONTIN){
     cout << "CONTINUAR S/N: ";
     cin >> CONTI;
     if (CONTI=='S' || CONTI=='s'){
          return true;
     } else if (CONTI=='N' || CONTI=='n'){
          return false;
     }
}
