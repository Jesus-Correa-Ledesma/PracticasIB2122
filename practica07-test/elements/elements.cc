/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file elements.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa hace un enfrentamiento entre piedra, viento y agua
  * @see 
  */
#include <iostream>

void Elementos(char option_a, char option_b) {
  switch (option_a) {
    case 'A': // Con el primer caso hacemos que se enfrente Agua contra los otros dos
      if (option_b == 'A') { // Si a es AGUA y b es AGUA es empate
        std::cout << "Empate" << std::endl;
      } else if (option_b == 'V') {
        std::cout << "2" << std::endl;
      } else if (option_b == 'P') {
        std::cout << "1" << std::endl;
      }
      break;
    case 'V': // Con el segundo caso hacemos que se enfrente el VIENTO contra los otros
      if (option_b == 'A') {
        std::cout << "1" << std::endl;
      } else if (option_b == 'V') {
        std::cout << "Empate" << std::endl; //Si a es VIENTO y b es VIETNO es empate
      } else if (option_b == 'P') {
        std::cout << "2" << std::endl;
      }
      break;
    case 'P': // Por último enfrentamos a PIEDRA contra los demás
      if (option_b == 'A') {
        std::cout << "2" << std::endl;
      } else if (option_b == 'V') {
        std::cout << "1" << std::endl;
      } else if (option_b == 'P') {
        std::cout << "Empate" << std::endl; //Si a es PIEDRA y b es PIEDRA entronces es empate
      }
      break;
    default:
      break;
  }
}

void Elementos(char option_a, char option_b);
int main() {
  char option_a;
  char option_b;
  std::cout << "Dime la primera letra: ";
  std::cin >> option_a;
  std::cout << "Dime la segunda letra: ";
  std::cin >> option_b;
  Elementos(option_a, option_b);

  return 0;
}