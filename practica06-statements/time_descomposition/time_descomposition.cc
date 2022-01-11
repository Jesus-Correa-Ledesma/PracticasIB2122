/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Hacer un cáulculo de horas minutos y segundos de un número
 */
#include <iostream>

int main() {
  int num;
  int h;
  int m;
  int s;
  std::cout << "Vamos a calcular cuanto equivale un número en horas, minutos y segundos" << std::endl;
  std::cout << "Dime un número: ";
  std::cin >> num;
  h = num / 3600; // Se obtiene el número de horas
  num = num % 3600; // El resto que queda para hacer los minutos
  m = num / 60; // Se obtienen los minutos con el resto anterio
  num = num % 60;
  s = num; // Los segundos se obtienen con el resto de los minutos
  std::cout << "El resultado es: " << h << " Horas " << m << " Minutos " << s << " Segundos " << std::endl;
  return 0;
}