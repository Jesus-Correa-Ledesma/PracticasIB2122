/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file intervals.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa muestra un intervalo según ciertos parámetros
  * @see 
  */
#include <iostream>

void Intervals(int pos_a1, int pos_b1, int pos_a2, int pos_b2) { // Esta función determina el tamaño de los parámetros y los ordena
  if ((pos_a2 > pos_b1 && pos_a2 > pos_a1) ||
      (pos_a2 < pos_a1 && pos_b2 < pos_a1)) {
    std::cout << "[]" << std::endl;
  } else if (pos_a1 >= pos_a2) {
    if (pos_b1 >= pos_b2) {
      std::cout << "[" << pos_a1 << "," << pos_b2 << "]" << std::endl;
    } else {
      std::cout << "[" << pos_a1 << "," << pos_b1 << "]" << std::endl;
    }
  } else {
    if (pos_b1 >= pos_b2) {
      std::cout << "[" << pos_a2 << "," << pos_b2 << "]" << std::endl;
    } else {
      std::cout << "[" << pos_a2 << "," << pos_b1 << "]" << std::endl;
    }
  }
}

void Intervals(int pos_a1, int pos_b1, int pos_a2, int pos_b2);

int main() { //Este main pide al usuariolos números para el intervalo y ejecuta la función Intervals
  int pos_a1;
  int pos_a2;
  int pos_b1;
  int pos_b2;
  std::cout << "Dime un número: ";
  std::cin >> pos_a1;
  std::cout << "Dime otro número: ";
  std::cin >> pos_b1;
  std::cout << "Dime otro número: ";
  std::cin >> pos_a2;
  std::cout << "Dime otro número: ";
  std::cin >> pos_b2;
  Intervals(pos_a1, pos_b1, pos_a2, pos_b2);
  return 0;
}