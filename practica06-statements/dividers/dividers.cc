/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Ver los divisores de un número
 */
#include <iostream>

int main() {
  int num;
  
  std::cout << "Vamos a calcular los divisores de un número" << std::endl;
  std::cout << "Dime un número: ";
  std::cin >> num;
  for (int i = 1; i <= num; ++i) { // Con este for se obtienen todos los divisores partiendo de i=1 de un número
    if (num % i == 0) {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}