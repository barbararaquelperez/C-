#include<iostream>
/*Un programa que lea una palabra y sustituya las vocales por 'u'*/
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
int main(){
    char palabra [10];
    char vocales[]={'a','e','o', 'i', 'u'};
    char salir;
    int cont, nvocales;
    cout<< "Dime una palabra: ";
    cin>> palabra;
    for(cont=0;cont<devuelve_longitud(palabra);cont++){ //Función para contar las letras de la palabra
                                                      for(nvocales=0;nvocales<5;nvocales++){
                                                                      if(palabra[cont]==vocales[nvocales]){
                                                                                                           palabra[cont]='u';
                                                                                                           }
                                                                      } 
    
    
          }
    cout<<"Palabra troleada: " <<palabra;
    cin>> salir;
}
