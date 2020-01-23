#include<iostream>
using namespace std;

int devuelve_longitud(char palabra[]){
    int longitud=0; //variable acumuladora
    int cont=0;
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;
                               } //Contamos las letras de la palabra
    return(longitud);
    //Devolver la longitud
}
int cuenta_vocales(char palabra[]){
    int n_vocales=0;
    char vocales[]={'a','e','o', 'i', 'u'};
    int cont1,cont2;
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){ //Función para contar las letras de la palabra
      for(cont2=0;cont2<5;cont2++){
        if(palabra[cont1]==vocales[cont2]){
         n_vocales++;
        }
      } 
    }
    return(n_vocales);
}
int cuenta_n(char palabra[]){
    int numero_n=0;
    int cont;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){ //Función para contar las letras de la palabra
       if(palabra[cont]=='n'){
        numero_n++;
       }
    }
    return(numero_n);
}
