/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Suma de los dígitos de un número natural
 */
#include <iostream>

int main() {
  int n; 
  int suma = 0; // Establecemos una variable suma y la iniciamos en 0
  std::cout << "Dime un número al que quieras sumar sus dígitos: ";
  std::cin >> n;
  while ( n > 0 ) { // Con este bucle sacamos los últimos dígitos y los sumamos entre ellos
    suma = suma + n%10;
    n = n/10;}
  std::cout << "La suma será: " << suma << std::endl;
  return 0;
}