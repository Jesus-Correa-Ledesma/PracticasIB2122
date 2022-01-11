/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three-words.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa muestra por pantalla si los n números introducidos son primos o no
  * @see 
  */
#include <iostream>
#include <cmath>

bool IsPrime(int inserted_number) {
  const int kOne{1};
  const int kZero{0};
  for (int i{2}; i <= sqrt(inserted_number); ++i) {
    if (inserted_number % i == kZero) {
      return false;
    }
  }
  if (inserted_number <= 1) {
    return false;
  }
  return true;
}

int main() {
  int number_cases;
  std::cin >> number_cases;
  int cases;
  for (int i{0}; i < number_cases; ++i) {
    std::cin >> cases;
    std::cout << cases << " is ";
    if (IsPrime(cases)) {
      std::cout << "prime" << std::endl;
    } else {
      std::cout << "not prime" << std::endl;
    }
  }

  return 0;
}