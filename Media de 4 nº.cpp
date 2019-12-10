#include<iostream>
/*Vamos a hacer un programa que nos pida 4 números y los guarde para calcular la media*/
int main(){
    //Definición de variable
    char salir;
    int num[4];
    int cont;
    int suma_numero;
    //Introducimos los numeros en el vector
    for(cont=0;cont<=3;cont++){
          std::cout<<"Introduce el numero: ", cont, ":";
          std::cin>>num[cont];
    }
    //Sacamos los numeros guardados 
    std::cout <<"Has metido los siguientes numeros \n";
    for(cont=0;cont<=3;cont++){
                               std::cout<<num[cont];
    }
    //Calculamos la media 
    
    std::cout<<"MEDIA/n";
    suma_numero=0;
    for(cont=0;cont<=3;cont++){
                               suma_numero=suma_numero+num[cont];//suma acumulada
                               
    }
    std::cout<<"La suma vale: "; 
    std::cout<< suma_numero;

    std::cin>> salir;
}
