/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic-number.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief El programa lee pares de números nym con n ≥ m, y para cada par imprime Hn - Hm
  * @see 
  */
#include <iomanip>
#include <iostream>
#include <string>

double HarmonicNumbers(int inserted_number_1, int inserted_number_2) { //Con el double tomaremos los números del usuario y sacaremos su ésima parte
  const double kOne{1.00};
  double harmonic{0.00};
  for (int i{inserted_number_2 + 1}; i <= inserted_number_1; ++i) { 
    harmonic += kOne / (double)i;
  }
  return harmonic; //Después de realizar la operación mostramos por pantalla la función harmonic
}

int main() { //Con el main pedimos al usuario los números y ejecutamos la operación anterior
  const char kSpace{' '};
  std::string inserted_numbers_string;
  while (getline(std::cin, inserted_numbers_string)) {
    if (inserted_numbers_string.empty()) {
      break;
    } else {
      int inserted_number_1{stoi(inserted_numbers_string.substr(
          0, (inserted_numbers_string.find(kSpace))))};
      int inserted_number_2{stoi(inserted_numbers_string.substr(
          (inserted_numbers_string.find(kSpace) + 1),
          (inserted_numbers_string.size() - 1)))};
      std::cout << std::fixed << std::setprecision(10) << HarmonicNumbers(inserted_number_1, inserted_number_2) << std::endl;
    }
  }

  return 0;
}