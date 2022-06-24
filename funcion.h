#ifndef FUNCION_H_INCLUDED
#define FUNCION_H_INCLUDED


#endif // FUNCION_H_INCLUDED

 /// MENU
 void MENU (int N);
 /// VALOR DADOS
void DadoJ1 (int &d1,int &d2);
void DadoJ2 (int &d3, int &d4);

void DadoJuegox2 (int &D1, int &D2);
void DadoJuegox3 (int &D3, int &D4, int &D5);

 /// EMPIEZAJUGANDO
 bool QuienEmpieza ( int a1, int a2, int D1_J1,int D2_J1,int D1_J2,int D2_J2);

 /// JUEGO
 void DatosRond (int a, int AcumRond, int Lan);

 /// REGLAS DADOS
int SumaDados (int d1, int d2,bool cont);

int Mal_Tiro(int d1, int d2, bool cont);


/// CONTINUAR
bool  CONTINUAR (char CONTI,bool CONTIN);
