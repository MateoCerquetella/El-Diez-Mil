#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<conio.h>
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

#include "EstructuraDados.h"
#include "CombinacionesDados.h"

using namespace std;

int main(){
    int PunAlta;
    char Opcion;
    string  NombreAlta, ApellidoAlta;
    extern string sNombre, sApellido;
    extern int PuAlta, x, PuAltaDos;
    while(true){
        system("title JUEGO DEL 10000");
            setlocale(LC_ALL, "Spanish");
    cout<<endl;
    cout <<"\t\t\t\t\t   __  ______  ______  ______  ______ "<<endl;
    cout <<"\t\t\t\t\t  /  |/ __   |/ __   |/ __   |/ __   |"<<endl;
    cout <<"\t\t\t\t\t /_/ | | //| | | //| | | //| | | //| |"<<endl;
    cout <<"\t\t\t\t\t   | | |// | | |// | | |// | | |// | |"<<endl;
    cout <<"\t\t\t\t\t   | |  /__| |  /__| |  /__| |  /__| |"<<endl;
    cout <<"\t\t\t\t\t   |_||_____/ |_____/ |_____/|_____/ "<<endl<<endl;
    cout << "_______________________________________________________________________________________________________________________"<<endl<<endl;
    cout << "\t\t\t\t   1] \t  Juego nuevo para un Jugador"<<endl<<endl;
    cout << "\t\t\t\t   2] \t  Juego nuevo para dos Jugadores"<<endl<<endl;
    cout << "\t\t\t\t   3] \t  Mostrar puntuación más alta"<<endl<<endl;
    cout << "\t\t\t\t   0] \t  Salir del Juego"<<endl<<endl;
    cout << "_______________________________________________________________________________________________________________________"<<endl<<endl;
    Opcion=getch();

      switch(Opcion){
       case '1':
            system("cls");
                UnJugador();
        break;
       case '2':
            system("cls");
                DosJugadores();
       break;
       case '3':
        if(x==1){
            PunAlta=PuAlta;
                NombreAlta=sNombre;
                    ApellidoAlta=sApellido;
                        x++;

        }
        if(PuAlta<PunAlta){
            PunAlta=PuAlta;
                NombreAlta=sNombre;
                    ApellidoAlta=sApellido;
        }
        cout << endl;
        cout << "\t\t\t  ____________________________| Puntuación alta |_________________________" << endl;
        cout << "\t\t\t |                                                                        |"<< endl;
        cout << "\t\t\t           1: "<<NombreAlta<<" "<<ApellidoAlta<<" con un total de "<<PunAlta<<" rondas" << endl;
        cout << endl;
        cout << "\t\t\t |________________________________________________________________________|"<< endl<<endl;
            system("pause");
                system("cls");
       break;
       case '0':
        system("cls");
            exit(0);
        break;
        default:
            cout<<"Ingresaste un numero equivocado, elija de nuevo correctamente por favor"<<endl;
                Sleep(700);
                    system("cls");
       return 0;
        }
    }
}
