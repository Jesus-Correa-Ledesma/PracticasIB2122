/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first-position.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa lee una secuencia y muestra el primer par
  * @see 
  */
#include <cmath>
#include <iostream>
#include <vector>

bool IsEven(int inserted_number) { //Con la booleana se busca el número par
  const int kTwo{2};
  const int kOne{1};
  if (inserted_number % kTwo == kOne) { //Si el resto es 1 no es par
    return false;
  } else { //Si el resto es 2 es par
    return true;
  }
}

int main() { //Con el main pedimos los números al usuario
  int inserted_number;
  int counter{1};
  while (std::cin >> inserted_number && !IsEven(inserted_number)) { // Este while buscará el primer número par, cuando lo encuentra para
    ++counter;
  }
  std::cout << counter << std::endl; // Mostrar el contador
  return 0;
}