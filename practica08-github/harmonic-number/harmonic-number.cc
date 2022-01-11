/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic-number.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 23 2021
  * @brief Este programa lee un número n e imprima el n -ésimo número armónico
  * @see 
  */
#include <iomanip>
#include <iostream>

double HarmonicNumbers(int inserted_number) { //Con el double tomaremos el número del usuario y sacaremos su ésima parte
  const double kOne{1.00};
  double harmonic{0.00}; //Iniciamos el double de harmonic a 0.00
  for (int i{1}; i <= inserted_number; ++i) { //Con este bucle hacemos la operación
    harmonic += kOne / i;
  }
  return harmonic;
}

int main() { //Con el main pedimos al usuario el número y usamos la función anterior
  int inserted_number;
  std::cin >> inserted_number;
  std::cout << std::fixed << std::setprecision(4) << HarmonicNumbers(inserted_number) << std::endl; //Imprimimos el resultado
  return 0;
}