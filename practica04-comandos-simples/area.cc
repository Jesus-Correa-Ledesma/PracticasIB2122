#include <iostream> 

int main(int argc, char* argv[]) {
    float L;

    std::cout << "Vamos a calcular el área y el perímero de un cuadrado." << std::endl;
    std::cout << "Dime cuanto mide el Lado del cuadrado." << std::endl;
        std::cin >> L;
    
    std::cout << "El área es: " << L*L << std::endl;
    std::cout << "El perímetro es: " << L+L+L+L << std::endl;

    return 0;
}

//g++ -std=c++14 -Wall -o area area.cc