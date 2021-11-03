#include <iostream>

int main() {

int i;
    std::cout << "Vamos a calcular el cambio de euros a yenes" << std::endl;
    std::cout << "Dime cuantos euros quieres convertir" << std::endl;
        std::cin >> i;
    std::cout << "Tus yenes son: " << i*0.0075 << std::endl;

    return 0;
}

//g++ -std=c++14 -Wall -o yenes yenes.cc