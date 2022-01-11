#include <iostream>

int main() {  // Espe programa te dice la cantidad de bytes que ocupa

  std::cout << "La variable int pesa: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "La variable char pesa: " << sizeof(char) << " bytes" << std::endl;
  std::cout << "La variable double pesa: " << sizeof(double) << " bytes" << std::endl;
  std::cout << "La variable float pesa: " << sizeof(float) << " bytes" << std::endl;
  std::cout << "La variable bool pesa: " << sizeof(bool) << " bytes" << std::endl;
  std::cout << "La variable short pesa: " << sizeof(short) << " bytes" << std::endl;
  std::cout << "La variable long pesa: " << sizeof(long) << " bytes" << std::endl;
  return 0;
}

