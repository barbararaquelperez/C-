#include<iostream>;
/*Vamos a hacer un programa en el que lea una palabra y me devuelve un numero*/

int main(){
    //Introducimos variables
    char palabra[10];
    char salir;
    int cont;
    int longitud;
    longitud=0;
    //Introducimos nombre
    std::cout<<"dime tu nombre: ";
    std::cin>> palabra;
    //DIRTY TRICK
    /*
    for(cont=0;palabra[cont]!='\0';cont++){
                                           longitud++;
    }
    */
    //Inicializamos el bucle
    cont=0;    
    while(palabra[cont]!='\0'){
                               longitud++;
                               cont++;

           
    }
    //Respuesta del programa
    std::cout<<"El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<"  letras";
    //Salir del programa
    std::cin>> salir;
}
