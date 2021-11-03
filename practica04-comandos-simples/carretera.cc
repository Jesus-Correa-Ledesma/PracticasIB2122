#include <iostream>

int main(){
int i;

    std::cout << "Vamos a calcular el coste de una carretera según los metros" << std::endl;
    std::cout << "Dime los metros que quieres calcular." << std::endl;
        std::cin >> i;

    std::cout << "El coste será: " << i*1624 << std::endl;
}

//g++ -std=c++14 -Wall -o carretera carretera.cc