#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <clocale>
#include "rlutil.h"
#include "funcion.h"
using namespace std;

int main() {

    setlocale(LC_ALL, "Spanish");
    // MENU PRINCIPAL.
    int num;
    string jugador [2];
    string OrdenJug [2];

     // JUEGO.
     int menu,d1,d2,d3,d4;
     int dado1_j1,  dado2_j1, dado1_j2, dado2_j2;
     int dado1,dado2, dado3;
     int acum1=0, acum2=0;
     bool empieza, continuar ;
     int ronda=0, lanzamientos=0,acumrond, acumtrufas[2]{ };
     char conti;
     int resultado, efe,aux;

     do {
     srand(time(NULL));
     MENU(num);
     cin >> num;
     rlutil:: cls();

    switch (num){
        case 1:
          cin.ignore();
          for (int x=0; x<2; x++){
               cout << "Nombre del Jugador "<<x+1<<"#: ";
               getline(cin , jugador[x]);
          }
          cout << "-----------------------------------------------------"<<endl<<endl;

          cout << "El jugador que consiga mayor puntuación empieza tirando"<< endl;
          //jugador#1
          cout<<"Puntos para "<< jugador[0] <<endl;
          DadoJ1 (dado1_j1,dado2_j1);
          acum1 += dado1_j1+dado2_j1;
          cout <<endl <<  acum1 <<endl;
          //jugador#2
          cout<<"Puntos para "<<  jugador[1] <<endl;
          DadoJ2 (dado1_j2, dado2_j2);
          acum2+=dado1_j2+dado2_j2;
          cout <<endl<< acum2 <<endl;

          empieza= QuienEmpieza (acum1,acum2,dado1_j1,dado2_j1,dado1_j2,dado2_j2);
          switch (empieza){
            case 1:
            cout <<"EMPIEZA "<<" "<< jugador[0]<< endl<<endl;
               OrdenJug[0]=jugador[0];
               OrdenJug[1]=jugador[1];
            break;
            case 0:
            cout << "EMPIEZA "<< " "<< jugador[1]<<endl<<endl;
               OrdenJug [0]=jugador [1];
               OrdenJug [1]=jugador [0];
            break;
          }
          rlutil:: anykey();
          rlutil::cls();
          for ( int i = 1 ; i <= 5 ; i ++){
               for (int x = 1; x<=2;  x++){
                    cout << "GRAN CERDO"<<endl;
                    cout << "------------------------------------------"<<endl;
                    acumrond=0;
                    lanzamientos=0;
                    continuar= true;
                    while (continuar == true){

                         cout << OrdenJug[0]<<": "<< acumtrufas[0] << "  TRUFAS TOTALES "<< "                 "<< OrdenJug[1]<< ": "<< acumtrufas[1]<< "  TRUFAS TOTALES"<< endl;
                         cout << endl <<endl << "TURNO DE "<< OrdenJug [x-1]<<endl;
                         DatosRond (i,acumrond,lanzamientos);

                         if (acumtrufas[0]>= 50  && acumtrufas [1]>=50){
                              DadoJuegox3 (dado1,dado2,dado3);
                              lanzamientos ++ ;
                              acumrond += resultado;
                              acumtrufas[x-1]+=resultado;
                              cout <<endl<<endl;
                              cout << "¡CONSEGUISTE "<< dado1+dado2 + dado3<< " TRUFAS!"<<endl;

                         }else {

                         DadoJuegox2(dado1,dado2);
                         resultado= SumaDados(dado1,dado2, continuar);
                         efe = Mal_Tiro (dado1,dado2,continuar);

                         lanzamientos ++ ;

                         acumrond += resultado;

                         acumtrufas[x-1] += resultado;

                         cout << "¡CONSEGUISTE "<< resultado << " TRUFAS!"<<endl;
                         cout <<endl<<endl;
                         continuar=CONTINUAR(conti,continuar);
                         }
                         rlutil:: cls();
                    }
               }
          }
        break;

        case 2:



          rlutil:: anykey();
        break;

        case 3:
        cout << "NOMBRE: "<<" "<< "Rojas Baltasar"<<endl;
        cout << "LEGAJO: "<<" "<< 26888<<endl;
          rlutil:: anykey();
        break;

     }


     } while (num!=0);

    return 0;
}
