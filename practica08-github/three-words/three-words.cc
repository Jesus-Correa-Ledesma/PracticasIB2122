/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three-words.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa muestra por pantalla tres palabras en orden inverso a cuando fueron introducidas
  * @see 
  */
#include <iostream>

int Orden(std::string pal_a, std::string pal_b, std::string pal_c) { //La función orden se encarga de ordenar las palabras en el orden que pide
  std::cout << pal_c << " " << pal_b << " " << pal_a << std::endl;
  return 0;
}

int Orden(std::string pal_a, std::string pal_b, std::string pal_c); //Con el main se solicita al usuario 3 palabras
int main() {
  std::string pal_a;
  std::string pal_b;
  std::string pal_c;
  std::cout << "Dime tres palabras: ";
  std::cin >> pal_a >> pal_b >> pal_c;
  std::cout << Orden(pal_a, pal_b, pal_c) << std::endl; //Se hace una llamada a la función y se ejecuta
}
  


