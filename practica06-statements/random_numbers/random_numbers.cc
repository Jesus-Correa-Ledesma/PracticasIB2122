/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Obtener un número aleatorio entre un intervalo dicho por el usuario
 */
#include <iostream>

int main() {
  int num1;
  int num2;
  std::cout << "Vamos a sacar un número aleatorio entre un intervalo, pero primero veamos el intervalo" << std::endl;
  std::cout << "Dime el primer número del intervalo: ";
  std::cin >> num1;
  std::cout << "Ahora dime el segundo número del intervalo: ";
  std::cin >> num2;
  std::cout << "El número aleatorio es: " << num1 + (rand() % (num2 - num1)) << std::endl; // Con la etiqueta de rand() se saca un número aleatorio entre el intervalo de num1 y num2
  return 0;
}