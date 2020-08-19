#ifndef EstructuraDados
#define EstructuraDados

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "CombinacionesDados.h"

using namespace std;

int vposdado[5];
int PuAlta, x=1;
string sNombre, sApellido;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// ---------------------RUTINAS ------------------------------///

///Tirar los dados (Random)
int TirarDados(int v[], int tam){
  srand(time(NULL));
  for(i=0;i<6;i++){
        v[i]=(rand()%6)+1;
      }
      return v[i];
  }

///Vector en 0
void v0(int pos[], int tam){
 for (i=0;i<tam;i++){
    pos[i]=0;
 }
}

///Defino la Tirada de los dados
void TrucharDados(int v[], int tam){
  for (i=0;i<tam;i++){
    cout<<"Ingrese el valor del dado "<<i+1<<":";
    cin>>v[i];
    if(v[i]<=0||v[i]>=7){
    cout<<"Ingrese el dado "<<i+1<<" invalido: ";
    cin>>v[i];
  }
}
}

/// Funcion Gotoxy
void gotoxy(int x, int y){ // x= Fila - y= Columna
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hcon,dwPos);
}

///Muestro los dados en grafico
void MostrarDadosGraficos(int dados[],int tam){
    int x=0;
for (i=0;i<tam;i++){
    switch(dados[i]){
       case 1:
           if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|     |" << endl;
            gotoxy(x,9);cout << "|  O  |" << endl;
            gotoxy(x,10);cout<< "|     |" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;
            break;
        case 2:
            if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|O    |" << endl;
            gotoxy(x,9);cout << "|     |" << endl;
            gotoxy(x,10);cout<< "|    O|" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;
            break;
        case 3:
            if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|O    |" << endl;
            gotoxy(x,9);cout << "|  O  |" << endl;
            gotoxy(x,10);cout<< "|    O|" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;
            break;
        case 4:
            if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|O   O|" << endl;
            gotoxy(x,9);cout << "|     |" << endl;
            gotoxy(x,10);cout<< "|O   O|" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;

            break;
        case 5:
            if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|O   O|" << endl;
            gotoxy(x,9);cout << "|  O  |" << endl;
            gotoxy(x,10);cout<< "|O   O|" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;
            break;
        case 6:
            if(x==0){
            x=15;
           }
           else if(x==15){
            x=30;
           }
           else if(x==30){
            x=45;
           }
           else if(x==45){
            x=60;
           }
           else if(x==60){
            x=75;
           }
           else if(x==75){
            x=90;
           }
            gotoxy(x,7);cout << ".-----." << endl;
            gotoxy(x,8);cout << "|O   O|" << endl;
            gotoxy(x,9);cout << "|O   O|" << endl;
            gotoxy(x,10);cout<< "|O   O|" << endl;
            gotoxy(x,11);cout<< ".-----." << endl;
            break;
        default:
            break;
        }
    }
    cout << endl;
}


///Muestro los Dados
 void MostrarDados(int v[], int tam){
    for (i=0;i<tam;i++){
     cout << v[i] << "\t";
    }
}


///Posicion Maxima
int PosMaxima(int v[], int tam){
	int Posmax=0;
	for (i=0;i<tam;i++){
		if (v[i]>v[Posmax]){
			Posmax=i;
		}
	}
	return Posmax;
}

///Cuento cada dado que salio
void CuentaDados(int v[], int tam,int vposdado[],int tam2){
 for(i=0;i<tam;i++){
      switch(v[i]){
        case 1: vposdado[0]++;
        break;
        case 2: vposdado[1]++;
        break;
        case 3: vposdado[2]++;
        break;
        case 4: vposdado[3]++;
        break;
        case 5: vposdado[4]++;
        break;
        case 6: vposdado[5]++;
        break;
        }
    }
}

///Poner Vector en 0
void ponerCero(int v[], int tam){
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}

///Mostrar combinacion en cout
void MostrarCombinaciones(int v[], int posmax, int Puntaje){
    switch(posmax){
        case 0:
        cout<< "\t¡Obtuviste un Juego De Uno! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 1:
        cout<< "\t¡Obtuviste un Juego De Cinco! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 2:
        cout<< "\t¡Obtuviste una Escalera Larga! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 3:
        cout<< "\t¡Obtuviste una Escalera Mediana! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 4:
        cout<< "\t¡Obtuviste Tres Pares! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 5:
        cout<< "\t¡Obtuviste un Trío de 1 Ampliado! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 6:
        cout<< "\t¡Obtuviste un Trío X++! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 7:
        cout<< "\t¡Obtuviste un Trío X! +"<<Puntaje<<" Puntos"<<endl;;
        break;
        case 8:
        cout<< "\t¡Obtuviste un Trío de 1! +"<<Puntaje<<" Puntos"<<endl;
        break;
        case 9:
        cout<< "\t¡Obtuviste un Sexteto! +"<<Puntaje<<" Puntos"<<endl;
        break;
        default:
        break;
        }
    }

/// 1 Jugador
char Nombre(char vNombre[],int tam){
    cout << "\t\t\t\t ______________________________________________________________" <<endl;
    cout << "\t\t\t\t|                                                              |"<<endl;
    cout << "\t\t\t\t                         ¡Hola Jugador 1!                       "<<endl;
    cout << "\t\t\t\t                  Introduzca su nombre y apellido               "<<endl<<endl;
    cout << "\t\t\t\t|______________________________________________________________|"<<endl<<endl;
    cout << "\t\t\t\t\t : ";
    cin >> vNombre;
}

char Apellido(char vApellido[],int  tam){
    cin >> vApellido;
}

/// 2 Jugadores
void MatrizNombre(char m[][30], int i){
    cout << "\t\t\t\t ______________________________________________________________" <<endl;
    cout << "\t\t\t\t|                                                              |"<<endl;
    cout << "\t\t\t\t                         ¡Hola Jugador "<<(i+1)<<"!"             <<endl;
    cout << "\t\t\t\t                  Introduzca su nombre y apellido               "<<endl<<endl;
    cout << "\t\t\t\t|______________________________________________________________|"<<endl<<endl;
    cout << "\t\t\t\t\t : ";
    cin >> m[i];
}
void MatrizApellido(char m[][30], int i){
     cin >> m[i];
}

void MostrarNombre(char mNombre[2][30],int i){
    cout << mNombre[i];
}

///Ronda dados
void RondaDados(char v[], int tam, char v2[], int tam2, int r, int PuntajeTotal){
    cout << "\t\t\t\t\ _____________________________________________" <<endl;
    cout << "\t\t\t\t\|                                             |"<<endl;
    cout << "\t\t\t\t\   \t Jugador: "<<v<<" "<<v2<<"           "     <<endl;
    cout << "\t\t\t\t\                                             "  <<endl;
    cout << "\t\t\t\t\ \t Ronda N°"<<r<<"                    "        <<endl;
    cout << "\t\t\t\t\                                             "  <<endl;
    cout << "\t\t\t\t\ \t Puntaje Total: "<<PuntajeTotal              <<endl;
    cout << "\t\t\t\t\                                             "  <<endl;
    cout << "\t\t\t\t\|_____________________________________________|"<<endl;
    cout << endl;
}

void RondaDados2(int r, char v[][30],int x,int vPuntajeTotal[],int tam, int i){
    cout << "\t\t\t\t\ _____________________________________________ "                  <<endl;
    cout << "\t\t\t\t\|                                             |"                  <<endl;
    cout << "\t\t\t\t\  \t\t\ Ronda N°"<<r<<"                    "                      <<endl;
    cout << "\t\t\t\t\ \t Proximo Turno: "<< v[i]<<endl;
    cout << "\t\t\t\t\ \t Puntaje de "<<v[0]<<" "<<vPuntajeTotal[0]<<" puntos          "<<endl;
    cout << "\t\t\t\t\ \t Puntaje de "<<v[1]<<" "<<vPuntajeTotal[1]<<" puntos          "<<endl;
    cout << "\t\t\t\t\                                              |"                  <<endl;
    cout << "\t\t\t\t\|_____________________________________________|"                  <<endl;
    cout << endl;
}

///Siguiente ronda
void SiguienteRonda(int r, int PuntajeTotal){
    if(PuntajeTotal<10000){
    cout << endl<<endl<<endl<<endl;
    cout << "\t\t\t ______________________________________________________________________ " << endl;
    cout << "\t\t\t|                                                                      |"<< endl;
    cout << "\t\t\t                 ¡La ronda N°" << r << " está por comenzar!        "     << endl;
    cout << endl;
    cout << "\t\t\t|______________________________________________________________________|"<< endl;
    cout<<endl<<endl<<endl<<endl;
    system("pause");
    system("cls");
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                              /// --------------------- JUEGO PRINCIPAL ------------------------------///

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                            /// --------------------- /// UN JUGADOR /// ------------------------------///

void UnJugador(){
    int PuntajeTotal=0, r=1, lanz=0, Puntaje=0, PuntosRonda=0, vcont[6], vc[10], dado[6], posmax;
    bool flag=true;
    char tdn, vNombre[30], vApellido[30];
        system("cls");
            Nombre(vNombre,30);
                Apellido(vApellido,30);
                    system("cls");
    while (PuntajeTotal<10000){                                         /// Estructura Juego
        system("cls");
            flag=true;
                lanz++;
                    TrucharDados(dado,6);
                        CuentaDados(dado,6,vcont,6);
                            ponerCero(vc,10);
                            vc[0]=JuegoDeUno(dado,6);
                            vc[1]=JuegoDeCinco(dado,6);
                            vc[2]=EscaleraLarga(dado,6);
                            vc[3]=EscaleraMediana(dado,6);
                            vc[4]=TresPares(dado,6);
                            vc[5]=Trio1Ampliado(dado,6);
                            vc[6]=TrioXplus(dado,6);
                            vc[7]=TrioX(dado,6);
                            vc[8]=Trio1(dado,6);
                            vc[9]=Sexteto(dado,6);
                                posmax=PosMaxima(vc,10);
                                    Puntaje=vc[posmax];
    if(Puntaje==0){
        system("cls");
        cout << endl;
        cout << "\t\t\t _____________________________________________________________________"  << endl;
        cout << "\t\t\t|                                                                     |" << endl;
        cout << "\t\t\t|       No salio ninguna combinacion, perdiste todo lo acumulado      |" << endl;
        cout << "\t\t\t|                                                                     |" << endl;
        cout << "\t\t\t|_____________________________________________________________________|" << endl;
        cout << endl<<endl;
        cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
            PuntosRonda=0;
                lanz=0;
                    cout<<endl;
                        system("pause");
                            system("cls");
                                RondaDados(vNombre, 30, vApellido, 30, r, PuntajeTotal);
                                    system("pause");
                                        system("cls");
                                            r++;
                                                SiguienteRonda(r,PuntajeTotal);
                                                    flag=false;
}
    else if((PuntajeTotal+(Puntaje+PuntosRonda)>10000)&&(Puntaje!=10000)){
        system("cls");
        cout << endl;
        cout << "\t\t\t __________________________________________________________________"  << endl;
        cout << "\t\t\t|                                                                  |" << endl;
        cout << "\t\t\t|       Te pasaste del 10000, perdiste todo lo acumulado           |" << endl;
        cout << "\t\t\t|                                                                  |" << endl;
        cout << "\t\t\t|__________________________________________________________________|" << endl;
        cout << endl<<endl;
        cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
            PuntosRonda=0;
                lanz=0;
                    cout<<endl;
                        system("pause");
                            system("cls");
                                RondaDados(vNombre, 30, vApellido, 30, r, PuntajeTotal);
                                    system("pause");
                                        system("cls");
                                            r++;
                                                SiguienteRonda(r,PuntajeTotal);
                                                    flag=false;
}

    else if(Puntaje==10000){                                                                ///Si salen seis 1.
         system("cls");
        cout << endl;
        cout << "\t\t\t __________________________________________________________________" << endl;
        cout << "\t\t\t|                                                                  |" << endl;
        cout << "\t\t\t|                  Sacates un Sexteto. ¡Excelente!                 |" << endl;
        cout << "\t\t\t|                                                                  |" << endl;
        cout << "\t\t\t|__________________________________________________________________|" << endl;
        cout << endl<<endl;
        cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
            system("pause");
                PuntajeTotal=10000;
                    r++;
                        flag=false;
}
    system("cls");
    if(flag==true){
    cout <<endl<<endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout <<"\t\tTurno de: "<<vNombre<<" "<<vApellido<< "\t  |   ""\t Lanzamiento N°: "<<lanz<< " \t     |     Ronda N°: "<<r<<endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<" \t\t Puntaje Total: "<<PuntajeTotal<<  "\t  |    Puntaje de la ronda: "<<PuntosRonda<<"       |     Puntaje Acumulado: "<< Puntaje<<endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    MostrarDadosGraficos(dado,6);
    cout << endl;
    cout <<"\t\t\t\t   -----------------------------------------------"<<endl;
    cout <<"\t\t\t\t    ";MostrarCombinaciones(vc,posmax,Puntaje);
    cout <<"\t\t\t\t   -----------------------------------------------"<<endl<<endl<<endl;
    cout <<"\t      ¿Querés continuar tirando?: (S/N)"<<endl;
    tdn=getch();
    flag=false;
    system("cls");
   if(tdn=='S'||tdn=='s'){                                                   /// Tirar o guardar
      PuntosRonda+=Puntaje;
}
    else if(tdn=='N'||tdn=='n'){
            if(PuntajeTotal+(Puntaje+PuntosRonda)<=10000){
                PuntajeTotal+=(Puntaje+PuntosRonda);
                    lanz=0;
                        PuntosRonda=0;
                                RondaDados(vNombre, 30, vApellido, 30, r, PuntajeTotal);
                                    r++;
                                        cout<<endl;
                                            system("pause");
                                                system("cls");
                                                    SiguienteRonda(r,PuntajeTotal);
    }
}
    else{
        cout << endl;
        cout << "\t\t\t ___________________________________________________________________________________"  << endl;
        cout << "\t\t\t|                                                                                   |" << endl;
        cout << "\t\t\t|      Ingresaste una opcion equivocada, se volverá a tirar de nuevo los dados      |" << endl;
        cout << "\t\t\t|                                                                                   |" << endl;
        cout << "\t\t\t|___________________________________________________________________________________|" << endl;
        cout << endl<<endl;
            lanz--;
                Sleep(3000);
                    system("cls");
        }
    }
}
    if(PuntajeTotal==10000){
        system("cls");
        cout << "\t\t\t\t ___________________________________________________________"  << endl;
        cout << "\t\t\t\t|                                                           |" << endl;
        cout << "\t\t\t\t              ¡Felicitaciones! "<<vNombre<<" "<<vApellido      << endl;
        cout                                                                            << endl;
        cout << "\t\t\t\t          ¡Has ganado el juego en "<<r-1<<" rondas!      "     << endl;
        cout << "\t\t\t\t|___________________________________________________________|" << endl;
        cout << endl<<endl;
 }
        system("pause");
            system("cls");
                PuAlta=r-1;
                    sNombre=vNombre;                                            ///Paso de Char a String
                        sApellido=vApellido;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                                /// --------------------- /// DOS JUGADORES /// ------------------------------///

void DosJugadores(){
    int r=1, lanz=0, Puntaje=0, PuntosRonda=0, r1=1, r2=1, vcont[6], vc[10], dado[6], PuntajeTotalDos[2], posmax, i=0, Turno, PosGanadora, rg;
    bool flag=true, Ganador=true, Empate=false;
    char tdn, maNombre[2][30], maApellido[2][30];
        system("cls");
        for(i=0;i<2;i++){
            MatrizNombre(maNombre,i);
                MatrizApellido(maApellido,i);
                    PuntajeTotalDos[i]=0;
    }
    system("cls");
        while(Ganador==true){
            for (i=0;i<2;i++){
                Turno=0;
                    while(Turno!=1){
                        if(i==0){
                            r=r1;
                            }
                            else{
                            r=r2;
                            }

    system("cls");
        Puntaje=0;
            flag=true;
                lanz++;
                    TrucharDados(dado,6);
                        CuentaDados(dado,6,vcont,6);
                                ponerCero(vc,10);
                                vc[0]=JuegoDeUno(dado,6);
                                vc[1]=JuegoDeCinco(dado,6);
                                vc[2]=EscaleraLarga(dado,6);
                                vc[3]=EscaleraMediana(dado,6);
                                vc[4]=TresPares(dado,6);
                                vc[5]=Trio1Ampliado(dado,6);
                                vc[6]=TrioXplus(dado,6);
                                vc[7]=TrioX(dado,6);
                                vc[8]=Trio1(dado,6);
                                vc[9]=Sexteto(dado,6);
                                    posmax=PosMaxima(vc,10);
                                        Puntaje=vc[posmax];

        if(Puntaje==0){
            if(i==0){
                r1++;
            }
            else{
                r2++;
            }
                system("cls");
                cout << endl;
                cout << "\t\t\t _____________________________________________________________________"  << endl;
                cout << "\t\t\t|                                                                     |" << endl;
                cout << "\t\t\t|       No salio ninguna combinacion, perdiste todo lo acumulado      |" << endl;
                cout << "\t\t\t|                                                                     |" << endl;
                cout << "\t\t\t|_____________________________________________________________________|" << endl;
                cout << endl<<endl;
                cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
                    Turno=1;
                        PuntosRonda=0;
                            lanz=0;
                                cout<<endl;
                                    system("pause");
                                        flag=false;
}
        else if((PuntajeTotalDos[i]+(Puntaje+PuntosRonda)>10000)&&(Puntaje!=10000)){
            if(i==0){
                r1++;
            }
            else{
                r2++;
            }
                system("cls");
                cout << endl;
                cout << "\t\t\t __________________________________________________________________"  << endl;
                cout << "\t\t\t|                                                                  |" << endl;
                cout << "\t\t\t|       Te pasaste del 10000, perdiste todo lo acumulado           |" << endl;
                cout << "\t\t\t|                                                                  |" << endl;
                cout << "\t\t\t|__________________________________________________________________|" << endl;
                cout << endl<<endl;
                cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
                    Turno=1;
                        PuntosRonda=0;
                            lanz=0;
                                cout<<endl;
                                    system("pause");
                                        flag=false;
}
        else if(Puntaje==10000){        ///Si salen seis 1.
            if(i==0){
                r1++;
            }
            else{
                r2++;
            }
             system("cls");
                cout << endl;
                cout << "\t\t\t __________________________________________________________________"  << endl;
                cout << "\t\t\t|                                                                  |" << endl;
                cout << "\t\t\t|                  Sacates un Sexteto. ¡Excelente!                 |" << endl;
                cout << "\t\t\t|                                                                  |" << endl;
                cout << "\t\t\t|__________________________________________________________________|" << endl;
                cout << endl<<endl;
                cout << "\t\t\t\t";MostrarDadosGraficos(dado,6);
                    system("pause");
                    Turno=1;
                        PuntosRonda=0;
                            lanz=0;
                                PuntajeTotalDos[i]=10000;
                                        flag=false;
}
system("cls");
    if(flag==true){
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout <<"\tTurno de: "<<maNombre[i]<<" "<<maApellido[i]<< "\t  |   ""\t Lanzamiento N°: "<<lanz<< " \t     |     Ronda N°: "<<r<<endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<" \t\t Puntaje Total: "<<PuntajeTotalDos[i]<<  "\t  |    Puntaje de la ronda: "<<PuntosRonda<<"       |     Puntaje Acumulado: "<< Puntaje<<endl;
    cout <<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
    MostrarDadosGraficos(dado,6);
    cout << endl;
    cout <<"\t\t\t\t   -----------------------------------------------"<<endl;
    cout <<"\t\t\t\t    ";MostrarCombinaciones(vc,posmax,Puntaje);
    cout <<"\t\t\t\t   -----------------------------------------------"<<endl<<endl<<endl;
    cout <<"\t      ¿Querés continuar tirando?: (S/N)"<<endl;
    tdn=getch();
        flag=false;
            system("cls");
   if(tdn=='S'||tdn=='s'){                                              /// Tirar o guardar
      PuntosRonda+=Puntaje;
}
    else if(tdn=='N'||tdn=='n'){
        Turno=1;
            if(PuntajeTotalDos[i]+(Puntaje+PuntosRonda)<=10000){
                PuntajeTotalDos[i]+=(Puntaje+PuntosRonda);
            }
            if(i==0){                                                      ///Cuento el turno de cada jugador
                r1++;
            }
            else{
                r2++;
            }
        lanz=0;
        PuntosRonda=0;
    }
    else{
        cout << endl;
        cout << "\t\t\t ___________________________________________________________________________________" << endl;
        cout << "\t\t\t|                                                                                   |" << endl;
        cout << "\t\t\t|      Ingresaste una opcion equivocada, se volverá a tirar de nuevo los dados      |" << endl;
        cout << "\t\t\t|                                                                                   |" << endl;
        cout << "\t\t\t|___________________________________________________________________________________|" << endl;
        cout << endl<<endl;
            lanz--;
            Sleep(2000);
                system("cls");
    }
}
        if(PuntajeTotalDos[0]==10000&&PuntajeTotalDos[1]==10000){
             Ganador=false;
                Empate=true;
                    PosGanadora=i;
                      if(i==0){
                        rg=r1;
                    }
                        else{
                        rg=r2;
                    }
        }

        else if(PuntajeTotalDos[i]==10000){
            Ganador=false;
                Empate=false;
                    PosGanadora=i;
                        if(i==0){
                            rg=r1;
                        }
                            else{
                            rg=r2;
                        }
            }
        }
        system("cls");
        RondaDados2(r,maNombre,2,PuntajeTotalDos,2,i+1);            /// Muestro Resultados de los dos Jugadores
        system("pause");

        if(Ganador==true&&i==1){
                system("cls");
                cout << endl<<endl<<endl<<endl;
                cout << "\t\t\t ______________________________________________________________________" << endl;
                cout << "\t\t\t|                                                                      |" << endl;
                cout << "\t\t\t                 ¡La ronda N°" << r+1 << " está por comenzar!        " << endl;
                cout << endl;
                cout << "\t\t\t|______________________________________________________________________|" << endl;
                cout<<endl<<endl<<endl<<endl;
                    system("pause");
        }
    }
}
    system("cls");
        if(Empate==true){
                cout << "\t\t\t\t ______________________________________________________________________ "  << endl;
                cout << "\t\t\t\t|                                                                      |" << endl;
                cout << "\t\t\t\t                          ¡Increible!"                                    <<endl;
                cout << "\t\t\t\t             ¡Hubo un Empate! en un total de "<<r<<" rondas!     "        << endl<<endl;
                cout << "\t\t\t\t|______________________________________________________________________|" << endl;
                cout << endl;
                    system("pause");
                        system("cls");
    }
        else if(Empate==false){
                cout << "\t\t\t\t ______________________________________________________________________" << endl;
                cout << "\t\t\t\t|                                                                      |" << endl;
                cout << "\t\t\t\t              ¡Felicitaciones "<<maNombre[PosGanadora]<<" "<<maApellido[PosGanadora]<<"!"<< endl<<endl;
                cout << "\t\t\t\t          ¡Has ganado el juego en "<<rg-1<<" rondas!    " << endl;
                cout << "\t\t\t\t|______________________________________________________________________|" << endl<<endl<<endl;
                    system("pause");
                        system("cls");
                            sNombre=maNombre[PosGanadora];                                            ///Paso de Char a String
                                sApellido=maApellido[PosGanadora];
                                    PuAlta=rg-1;
                                        system("pause");

    }
}
#endif // estructuradados
