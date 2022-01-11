/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Hacer la función de Collatz
 */
#include <iostream>

const int kInitialValue {20};
int collatz = kInitialValue;
int contador = 1;

int main() {
  std::cout << "kInitialValue: " << kInitialValue << std::endl;
  std::cout << kInitialValue << " ";
  while (collatz != 1){ // Si la función collatz es distinto de 1 se dan dos casos
    if(collatz % 2 == 0) { // Que el resto entre 2 sea 0, entonces se divide collatz entre 2
      collatz = collatz/2;}
    else { // O por el contrario, si no da 0 se multiplica *3 y se le suma 1 para dar los valores
      collatz = (collatz*3)+1; }
    std::cout << collatz << " ";
    ++contador;
    }
    std::cout << "" <<std::endl;
    std::cout << "Hay " << contador << " valores." << std::endl;
  return 0;
}