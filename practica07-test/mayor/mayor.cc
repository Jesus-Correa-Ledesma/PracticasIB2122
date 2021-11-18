/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file mayor.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa escoge un número mayor al que introduce el usuario
  * @see 
  */
#include <iostream>
 
int mayor(int numero_1, int numero_2, int numero_3) { //Declaramos la variable mayor que elige al mayor
 if (numero_1 > numero_2 && numero_1 > numero_3) { //Si el numero_1 es mayor a los otros imprimirlo en pantalla
   std::cout << numero_1 << std::endl;
 } else if (numero_2 > numero_1 && numero_2 > numero_3) { //Si el numero_2 es mayor a los otros imprimirlo en pantalla
   std::cout << numero_2 << std::endl;
 } else if ( numero_3 > numero_1 && numero_2) { //Si el numero_3 es mayor a los otros imprimirlo en pantalla
   std::cout << numero_3 << std::endl;
 } return 0;
}

int main() { //Este main pide al usuario los tres números y saca el mayor con la función mayor
 int numero_1, numero_2, numero_3;
 std::cout << "Dime el primer número: ";
 std::cin >> numero_1;
 std::cout << "Dime el segundo número: ";
 std::cin >> numero_2;
 std::cout << "Dime el tercer número: ";
 std::cin >> numero_3;
 std::cout << "El mayor número es: " << mayor(numero_1, numero_2, numero_3) << std::endl; //Se muestra en pantalla el resultado del mayor
 return 0;
}
