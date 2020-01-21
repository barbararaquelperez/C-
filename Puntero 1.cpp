#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main (){
    int a; 
    int *pa; // pa va a guardar un n hexadecimal que se supone que es la direcccion donde se encuentra otra variable
             //coge esa direccion y la almacena dnd vive
             //pa es un puntero cuya variable que contiene  un nº hexadecimal/direccion a otra variable
             // 
    char salir;
    int numeros[5];
    a=2;
    numeros[0]=9;
    numeros[1]=8;
    numeros[2]=7;
    //pa=&a;
    printf("El numero x= %d y esta almacenado en %X", a, &a); //saca la direccion de la celda //&a: posicion de memoria donde almaceno la variable a (nº tipo exadecimal)
    printf("La variable pa es un puntero pa=%X", pa);
    printf("numeros[0]=%d", numeros[0]);
    printf("\n numeros[1]=%d", numeros[1]);
    printf("\n numeros[2]=%d", numeros[2]);
    printf("\n numeros[3]=%d", numeros[3]);
    printf("\n numeros[4]=%d", numeros[4]);
    printf("\n numeros[5]=%d", numeros[5]);
    
    printf("\nnumeros=%d", *(numeros+1));
    //%X se usa para traducir al lenguaje que el ordenador interprete
    // igual que cout pero en antiguo //sacar algo en pantalla //descriptor tipo de dato que vamos a sacar
    cin>> salir;
}
