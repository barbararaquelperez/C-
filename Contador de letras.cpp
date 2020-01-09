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
    //Repite el programa automaticamente tu nombre
    std::cout<<"\n Te llamas ";
    //La primera letra de tu nombre es
    std::cout<<"\n La primera letra de tu nombre es la ";
    std::cout<< palabra[0];
    //La animadora deltrea tu nombre
    std::cout<<"\n ANIMADORA: \n";
    //Hacemos bucle que diga cada letra de tu nombre 
    for(cont=0;cont<=9;cont++){
                               std::cout<<"Dame una ";
                               std::cout<< palabra[cont];
                               std::cout<<"\n";
    }
    //Cuantas letras tiene tu nombre
    for(cont=0;cont<=9;cont++){
                               if(palabra[cont]!='\0'){
                                                       longitud=longitud+1;
                               }
    }
    std::cout<<" El nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<< longitud;
    std::cout<<" letras";
    //Salir del programa
    std::cin>> salir;
}
    
