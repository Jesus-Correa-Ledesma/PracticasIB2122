#include <iostream>
int main() {

int Y; //0.05€
int A; //0.10€
int B; //0.20€
int C; //0.50€
int D; //1€
int E; //2€
int F; //5€
int G; //10€
int H; //20€
int I; //50€
int J; //100€
int K; //200€
int L; //500€

    std::cout << "Vamos a ver cuanto dinero tienes" << std::endl;
    std::cout << "Dime cuantas monedas de 5 céntimos que tienes" << std::endl;
        std::cin >> Y;
    std::cout << "Dime cuantas monedas de 10 céntimos que tienes" << std::endl;
        std::cin >> A;
    std::cout << "Dime cuantas monedas de 20 céntimos que tienes" << std::endl;
        std::cin >> B;
    std::cout << "Dime cuantas monedas de 50 céntimos que tienes" << std::endl;
        std::cin >> C;
    std::cout << "Dime cuantas monedas de 1 euro que tienes" << std::endl;
        std::cin >> D;
    std::cout << "Dime cuantas monedas de 2 euros que tienes" << std::endl;
        std::cin >> E;
    std::cout << "Dime cuantos billetes de 5 euros que tienes" << std::endl;
        std::cin >> F;
    std::cout << "Dime cuantos billetes de 10 euros que tienes" << std::endl;
        std::cin >> G;
    std::cout << "Dime cuantos billetes de 20 euros que tienes" << std::endl;
        std::cin >> H;
    std::cout << "Dime cuantos billetes de 50 euros que tienes" << std::endl;
        std::cin >> I;
    std::cout << "Dime cuantos billetes de 100 euros que tienes" << std::endl;
        std::cin >> J;
    std::cout << "Dime cuantos billetes de 200 euros que tienes" << std::endl;
        std::cin >> K;
    std::cout << "Dime cuantos billetes de 500 euros que tienes" << std::endl;
        std::cin >> L;

    std::cout << "El dinero total que tienes es: " << (Y*0.05)+(A*0.10)+(B*0.20)+(C*0.50)+(D*1.0)+(E*2.0)+(F*5.0)+(G*10.0)+(H*20.0)+(I*50.0)+(J*100.0)+(K*200.0)+(L*500.0) << std::endl;
    std::cout << "El dinero en céntimos es: " << (Y*0.05)+(A*0.10)+(B*0.20)+(C*0.50) << std::endl;
    std::cout << "El dinero en monedas de Euro es: " << (D*1.0)+(E*2.0) << std::endl;
    std::cout << "El dinero en billetes es: " << (F*5.0)+(G*10.0)+(H*20.0)+(I*50.0)+(J*100.0)+(K*200.0)+(L*500.0) << std::endl;

    return 0;
}

//g++ -std=c++14 -Wall -o dinero dinero.cc