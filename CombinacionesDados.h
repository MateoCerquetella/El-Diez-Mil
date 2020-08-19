#ifndef COMBINACIONESDADOS_H_INCLUDED
#define COMBINACIONESDADOS_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "EstructuraDados.h"

using namespace std;

/// Variables
int i, Puntos=0;

///Cuenta Numeros
int ContarNumeros(int v[],int valor){
  int i, cantidad=0;
  for (i=0;i<6;i++){
    if (v[i]==valor){
        cantidad++;
    }
  }
  return cantidad;
}

///Combinaciones de los dados

/////////////////////////////////////////////////////////////////////////////////////////////
int JuegoDeUno(int v[], int tam){
int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
}
        if (D1==1){
            Puntos=100;
        }
        else if (D1==2){
            Puntos=200;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int JuegoDeCinco(int v[], int tam){
int D5=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==5){
            D5++;
        }
}
        if (D5==1){
            Puntos=50;
        }
        else if (D5==2){
            Puntos=100;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int Trio1(int v[], int tam){
 int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
}
        if (D1==3){
            Puntos=1000;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
  int TrioX(int v[], int tam){
  int D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
     for (i=0;i<tam;i++){
        if(v[i]==2){
            D2++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==3){
            D3++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==4){
            D4++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==5){
            D5++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==6){
            D6++;
        }
    }
        if (D2==3){
            Puntos=200;
        }
       else if (D3==3){
            Puntos=300;
        }
       else if (D4==3){
            Puntos=400;
        }
        else if (D5==3){
            Puntos=500;
        }
        else if (D6==3){
            Puntos=600;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int TrioXplus(int v[], int tam){
 int D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==2){
            D2++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==3){
            D3++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==4){
            D4++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==5){
            D5++;
        }
    }
     for (i=0;i<tam;i++){
        if(v[i]==6){
            D6++;
        }
    }
        if (D2==4){
            Puntos=400;
        }
        else if (D2==5){
            Puntos=400;
        }
        else if (D3==4){
            Puntos=600;
        }
        else if (D3==5){
            Puntos=600;
        }
        else if (D4==4){
            Puntos=800;
        }
        else if (D4==5){
            Puntos=800;
        }
        else if (D5==4){
            Puntos=1000;
        }
        else if (D5==5){
            Puntos=1000;
        }
        else if (D6==4){
            Puntos=1200;
        }
        else if (D6==5){
            Puntos=1200;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int Trio1Ampliado(int v[], int tam){
 int D1=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
    }
        if (D1==4){
        Puntos=2000;
        }
        else if (D1==5){
        Puntos=2000;
        }
    return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int TresPares(int v[], int tam){
    int dados[6], ContadorPar=0,i,Puntos=0;
  for (i=0;i<tam;i++){
    dados[i]=ContarNumeros(v,i+1);
  }
  for (i=0;i<tam;i++){
    ContadorPar+=dados[i]/2;
  }
  if(ContadorPar==3){
        Puntos=1000;
  }
  else{
    return 0;
}
    return Puntos;
}

/////////////////////////////////////////////////////////////////////////////////////////////
 int EscaleraMediana(int v[], int tam){
int D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
    for (i=0;i<tam;i++){
         if(v[i]==1){
            D1++;
        }
         if(v[i]==2){
            D2++;
        }
         if(v[i]==3){
            D3++;
        }
         if(v[i]==4){
            D4++;
        }
         if(v[i]==5){
            D5++;
        }
         if(v[i]==6){
            D6++;
        }
        ///
         if(D1>1){
            D1--;
        }
         if(D2>1){
            D2--;
        }
        if(D3>1){
            D3--;
        }
        if(D4>1){
            D4--;
        }
        if(D5>1){
            D5--;
        }
        if(D6>1){
            D6--;
        }
    }
         if (D1==1&&D2==1&&D3==1&&D4==1&&D5==1){
            Puntos=500;
        }
         else if (D2==1&&D3==1&&D4==1&&D5==1&&D6==1){
            Puntos=500;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
 int EscaleraLarga(int v[], int tam){
int D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,i,Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
         if(v[i]==2){
            D2++;
        }
         if(v[i]==3){
            D3++;
        }
         if(v[i]==4){
            D4++;
        }
         if(v[i]==5){
            D5++;
        }
         if(v[i]==6){
            D6++;
        }
}
        if (D1==1&&D2==1&&D3==1&&D4==1&&D5==1&&D6==1){
            Puntos=1500;
        }
        return Puntos;
}
/////////////////////////////////////////////////////////////////////////////////////////////
int Sexteto(int v[], int tam){
int D1=0, Puntos=0;
    for (i=0;i<tam;i++){
        if(v[i]==1){
            D1++;
        }
    }
        if (D1==6){
        Puntos=10000;
        }
        return Puntos;
}
#endif // combinacionesdados
