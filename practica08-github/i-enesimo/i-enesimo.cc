/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic-number.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief El programa lee un número natural y da una su posición en una secuencia de números
  * @see 
  */
#include <iostream>

void PrintNumberInPos(int position_search, int number_in_pos) { //Esta función busca la posición del número n
  std::cout << "At the position " << position_search << " there is a(n) " << number_in_pos << "." << std::endl;
}

int main() { //Pedimos al usuario la secuencia de números
  int position_search;
  std::cin >> position_search;
  int number_in_pos;
  for (int i{1}; i <= position_search; ++i) { //Con este bucle añadimos la secuenci de números
    std::cin >> number_in_pos;
  }
  PrintNumberInPos(position_search, number_in_pos); //La función busca la posición de n
  return 0;
}