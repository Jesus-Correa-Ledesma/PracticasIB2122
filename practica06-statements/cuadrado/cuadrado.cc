/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Dibujar un cuadrado de lado n con *.
 */
#include <iostream>

int main() {
  int n;
  std::cout << "Vamos a dibujar un cuadrado con * de tamaño n dado por el usuario" << std::endl;
  std::cout << "Dime de que tamaño quieres pintar el cuadrado: ";
  std::cin >> n;
  std::cout << "\n";
  for (int r = 1; r <= n; ++r) { //Con estos for hacen la altura y anchura del cuadrado según n
    for (int l = 1; l <= n; ++l) {
      std::cout << "*";}
    std::cout << "\n";}
  return 0;
}