/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file collatz.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa ejecuta la función de Collatz
  * @see 
  */
#include <iostream>

int Collatz(int inserted_number) { //Creamos la función collatz para usarla luego
  int counter{0}; //Ponemos un contador a 0
  while (inserted_number != 1) { //Este bucle hace que si el número es distinto a 1 se realice la operación de collatz
    if (inserted_number % 2 == 0) {
      inserted_number = inserted_number / 2;
      ++counter;
    } else {
      inserted_number = (inserted_number * 3) + 1;
      ++counter;
    }
  }
  return counter; //Después de hacer la función este retorna el contador
}

int Collatz(int inserted_number);

int main() { //Con el main pedimos al usuario un número y usamos la función de collatz con ese número
  std::string inserted_number_string;
  while (getline(std::cin, inserted_number_string)) {
    if (inserted_number_string.empty()) {
      break;
    } else {
      int inserted_number = stoi(inserted_number_string);
      std::cout << Collatz(inserted_number) << std::endl;
    }
  }
}

