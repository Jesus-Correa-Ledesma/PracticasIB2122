/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file num-e.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa calcula la aproximación del número "e"
  * @see 
  */
#include <cmath>
#include <iomanip>
#include <iostream>

double Factorial(int number) {
  double factorial{1.00};
  for (double i{1.00}; i <= number; ++i) {
    factorial *= i;
  }
  return factorial;
}

double AproximationE(int inserted_terms) {
  const double kOne{1.00};
  double number_e{0.00};
  for (int i{0}; i < inserted_terms; ++i) {
    number_e += kOne / Factorial(i);
  }
  return number_e;
}

int main() {
  std::string inserted_terms_string;
  while (getline(std::cin, inserted_terms_string)) {
    if (inserted_terms_string.empty()) {
      break;
    } else {
      int inserted_terms{stoi(inserted_terms_string)};
      std::cout << "With " << inserted_terms << " term(s) we get " << std::fixed
                << std::setprecision(10) << AproximationE(inserted_terms) << "."
                << std::endl;
    }
  }
}