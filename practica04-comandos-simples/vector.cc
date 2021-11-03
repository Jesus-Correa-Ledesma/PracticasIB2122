#include <iostream>
#include <cmath>
int main() {

    int x_1;
    int x_2;
    int y_1;
    int y_2;
    int z_1;
    int z_2;


    std::cout << "Vamos a calcular la distancia entre dos puntos A y B en un espacio vectorial" << std::endl;
    std::cout << "Dame las coordenadas del vector A, vamos por partes" << std::endl;
    std::cout << "Dime las coordenadas X, Y, Z del vector A:" << std::endl;
        std::cin >> x_1;
        std::cin >> y_1;
        std::cin >> z_1;

    std::cout << "Ahora, dime las coordenadas del B:" << std::endl;
        std::cin >> x_2;
        std::cin >> y_2;
        std::cin >> z_2;

    std::cout << "La distancia de A hasta B es: " << sqrt((x_2-x_1) + (y_2-y_1) + (z_2-z_1)) << std::endl;
    
    return 0;
}

//g++ -std=c++14 -Wall -o vector vector.cc