/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parentheses.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa dice que si una secuencia de paréntesis cierra bien o no
  * @see 
  */
#include <iostream>
#include <string>

bool Parentheses(std::string inserted_string) { //Con la operación buleana determinamos que si cierra bien o no
  const char kLeftParentheses{'('};
  const int kZero{0};
  bool flag{true};
  int count{0};
  for (int i{0}; i < inserted_string.length(); ++i) { //Con este bucle vamos mirando cada secuencia de () y su orden
    if (inserted_string[i] == kLeftParentheses) {
      ++count;
    } else {
      --count;
    }
    if (count < kZero) {
      flag = false;
      break;
    }
  }
  if (count != 0) {
    flag = false;
  }
  return flag;
}

int main() { // Con el main pedimos la secuencia de paréntesis
  std::string inserted_string;
  getline(std::cin, inserted_string);
  if (Parentheses(inserted_string)) { // Si se cierran bien decir yes
    std::cout << "yes" << std::endl;
  } else { // Sino cierra decir no
    std::cout << "no" << std::endl;
  }
}