#include <iostream>
#include <string>

bool is4digits (std::string pin) {
    bool status = true;
        if (pin.length() !=4) {
            status = false;
        }
        return status;
}


int main() {

int a;
double b;
float c;


    std::cout << "Dime un número entero: " << std::endl;
        std::cin >> a;
    std::cout << "Dime un número decimal: " << std::endl;
        std::cin >> b;
    std::cout << "Dime un número real: " << std::endl;
        std::cin >> c;
    

    std::string PIN;
    std::cout << "Pon un pin de 4 dígitos" << std::endl;
        std::cin >> PIN;
    
    if (is4digits(PIN) == 1) 
    {
        std::cout << "Pin correcto" << std::endl;
    }
    else
    {
        std::cout << "Pin incorrecto, prueba de nuevo" << std::endl;
    }
    return 0;
}



//g++ -std=c++14 -Wall -o reference reference.cc