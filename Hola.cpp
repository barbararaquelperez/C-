#include<iostream>
int main() {
    //Definición de variables
    char salir;
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa";
    std::cout <<"Eres guapo? (s/n): ";
    std:: cin >> respuesta;
    //&& significa AND
    // || significa Or
    if (respuesta=='s' || respuesta=='s'){
       std::cout <<"Hola guapo";
}
    else{
         std::cout <<"Hola feo";
}
    std::cin >> salir;

}
