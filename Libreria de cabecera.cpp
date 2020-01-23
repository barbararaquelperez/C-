#include <iostream> //Instrucciones al pre-procesador include=(copia y pega)
#include<raquel_func.h>
using namespace std; 
/* Funcion
int devuelve_suma (int num1,int num2, int num3){ 
    
    return(suma);
} */

/* Cuerpo principal
int main(){
    return(!=0);
}
*/

int main(){
    int n_vocales=0;
    char vocales[]={'a','e','o', 'i', 'u'};
    int cont1,cont2;
    char palabra[10];
    char salir;
    
    cout<<"Introduzca su palabra aqui: ";
    cin>>palabra;
    for(cont1=0;cont1<devuelve_longitud(palabra);cont1++){ //Función para contar las letras de la palabra
      for(cont2=0;cont2<5;cont2++){
        if(palabra[cont1]==vocales[cont2]){
         n_vocales++;
        }
      } 
    }
    cout<<"su numero de vocales es: ";
    cout<<n_vocales;
    
    cin>>salir;
}
