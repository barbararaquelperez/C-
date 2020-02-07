#include<iostream>
#include<stdio.h>//printf
#include<stdlib.h>//malloc
#include<raquel_func.h>
#include<string.h>//strcpy
using namespace std;
//ORDENAMOS POR EL METODO DE LA BURBUJA
void puntero(){
	int veces;
	int cont;
	char *palabras[4];
    int longitud;
	char *p_aux;
    char aux[20];
	for(veces=1;veces<4;veces++){
     for(cont=0;cont<3;cont++){
       strcpy(palabras[cont], palabras[cont+1]); //stream comparation
       p_aux=palabras[cont];
       palabras[cont]=palabras[cont+1];
       palabras[cont+1]=p_aux;
       }
      }
}

int main(){
    char *palabra[4];
    int cont;
    int longitud;
    int veces;
    char salir;
    char *p_aux;
    char aux[20];
    //Leo cuatro palabras
    for(cont=0; cont<4; cont++){
     cout<< "palabra: "; 
     cin>> aux;
     longitud=devuelve_longitud(aux);    
     palabra[cont]= (char *)malloc((longitud+1)*sizeof(char)); //reservar sitio //Conversion forzada se ve a transforamr en un puntero
     strcpy(palabra [cont],aux); //destino, origen //pensada para que los dos parametros sean la posicion de memoria de las primera letra de cada una de las palabras
    }
    cout<< "\nLISTA DE PALABRAS\n"; 
    for(cont=0;cont<4;cont++){
	 printf("%s\n", palabra[cont]);
	}
  
 cin >> salir;
}
