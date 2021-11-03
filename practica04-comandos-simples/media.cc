#include <iostream>

int main(int argc, char *argv[]) {

float A,B,C;

    std::cout << "Vamos a calcular la media de tres calificaciones de la Asignatura de Informática Básica" << std::endl;
    std::cout << "Dime la nota del cuestionario: " << std::endl;
        std::cin >> A;
    std::cout << "Dime la nota de la práctica: " << std::endl;
        std::cin >> B;
    std::cout << "Dime la nota de del trabajo de casa: " << std::endl;
        std::cin >> C;

    std::cout << "La media de las calificaciones será: " << (A+B+C)/3 << std::endl;

    return 0;
}

//g++ -std=c++14 -Wall -o media media.cc