#include<iostream>

int main() {
    //Definicion de variables
    int i;
    int ntabla;
    char salir; 
    std::cout <<"Que tabla deseas que muestre: ";
    std::cin >> ntabla;
    std::cout <<"*****************\n";
    std::cout <<"*       TABLA DEL        ";
    std::cout << ntabla;
    std::cout <<"              *\n";  
    std::cout <<"*****************\n";
    for(i=1; i<=10; i++)
    {
            std::cout<<ntabla; 
            std::cout<<" x ";
            std::cout<< i;
            std::cout<<" = ";
            std::cout<<ntabla * i;
            std::cout<<"\n";
    }
    std::cin>> salir;
}

