/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file triangle.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa hace un triángulo con ** según un número n dado por el usuario.
  * @see 
  */
#include <iostream>
 
int Triangle(int size) { //Construimos la variable que dibuje el triángulo
 const char kAsterisco[2]{"*"};  //Ponemos como caracter el *
 std::cout << kAsterisco << std::endl;
 for (int i{1}; i < size; ++i) { //Con estos for detallamos la base y la altura del triángulo según size
   for (int a{0}; a < i ; ++a) {
     std::cout << kAsterisco;
   }std::cout << kAsterisco << std::endl; //Dibujamos el triángulo con las medidas dadas
 } return 0;
}
int main() { // Este main pide al usuario el size y luego imprime por pantalla el resultado
 int size;
 std::cout << "Dime de qué tamaño quieres hacer el triángulo: ";
 std::cin >> size;
 std::cout << size;
 std::cout << Triangle(size) << std::endl;
 return 0;
}
