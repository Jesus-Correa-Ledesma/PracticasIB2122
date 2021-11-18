/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file counting.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa cuenta cuantas letras "a" hay en la palabra introducida
  * @see 
  */
#include <iostream>
#include <string>

int CountA(std::string inserted_string) { //Con esta función buscamos la letra A y la contamos
  const char searched_letter{'a'};
  int counter{0};
  for (int i{0}; i < inserted_string.length(); ++i) { //Cada vez que se vea una a el contador que estaba en cero sumará 1
    if (inserted_string[i] == searched_letter) {
      ++counter;
    }
  }
  return counter;
}

int CountA(std::string inserted_string);

int main() { //El main solicita una palabra para ejecutar el countA
  std::string inserted_string;
  std::cout << "Introduce una palabra: ";
  getline(std::cin, inserted_string);
  std::cout << CountA(inserted_string) << std::endl;
}

