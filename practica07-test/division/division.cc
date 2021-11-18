/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file division.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa calcula la división y el resto entre dos números
  * @see 
  */
#include <iostream>

int division(int operator_1, int operator_2); //Declaramos las variables de la división y el resto
int resto(int operator_1, int operator_2);

int division(int operator_1, int operator_2) {
  return operator_1 / operator_2; //Calculamos la división
}

int resto(int operator_1, int operator_2) {
  return operator_1 % operator_2; //Calculamos el resto
}   

int main() { //Pedimos al usuario los operadores y mostramos el resultado
  int operator_1{0};
  int operator_2{0};
  std::cout << "Dime el primer operador: ";
  std::cin >> operator_1;
  std::cout << "Dime el segundo operador: ";
  std::cin >> operator_2;
  std::cout<< "La división es: " << division(operator_1, operator_2) << std::endl;
  std::cout << "El resto es: " << resto(operator_1, operator_2) << std::endl;
  return 0;
}