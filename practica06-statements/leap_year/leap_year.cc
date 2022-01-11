/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Ver si un año es o no bisiesto
 */
#include <iostream>
#include <cstdlib>
#include <stdio.h>

int main() {
  
  int fecha = 1800;
  std::cout << "Vamos a ver si el año introducido por el usuario es bisiesto o no" << std::endl;
  std::cout << "Dime un año: ";
  std::cin >> fecha;
  if (fecha % 4 != 0 || (fecha % 10 == 0 && fecha % 400 != 0)) { // Si no son múltiplos de 4 o que sea múltiplo de 100 pero no de 400 entonces no es bisiesto
    std::cout << "El año " << fecha <<  " no es bisiesto" << std::endl;}
  else { // Todos los números que queden fuera del rango anterior si son bisiestos
    std::cout << "El año " << fecha << " si es bisiesto." << std::endl;}
  return 0;
}