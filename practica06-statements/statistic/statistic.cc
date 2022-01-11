/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Sacar un valor aleatorio de un vector de tamaño 5 y calcula la media  y los valores max y min.
 */
#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

const int kVectorSize {5};
float valor_maximo {0};
float valor_minimo {10};
float suma_valor_medio, valor_medio;

int main() {
  std::cout << "Vamos a obtener unos valores aletarios a un vector de tamaño 5 y calcular la media de los valores, el valor máximo y el valor mínimo."<<std::endl;
  std::vector<float> vector;
  vector.reserve(kVectorSize); // Reservamos espacio en la memoria para el tamaño del vector
  std::srand(std::time(nullptr));
  for(int i=0; i<kVectorSize; i++) { // Sacamos el valor medio del vector
    vector[i]=round(std::rand()/((RAND_MAX)/100))*0.1;
    valor_medio = vector[i]/kVectorSize;
    suma_valor_medio += valor_medio;
    if(vector[i]>valor_maximo) { // Sacamos el valor máximo del vector
        valor_maximo = vector[i];}
    if(vector[i]<valor_minimo) { // Sacamos el valor mínimo del vector
        valor_minimo = vector[i];} 
    }
  std::cout << "El valor medio de los datos es: " << suma_valor_medio << std::endl; // Mostramos los valores anteriores por pantalla
  std::cout << "El valor maximo de los datos es: " << valor_maximo << std::endl;
  std::cout << "El valor minimo de los datos es: " << valor_minimo << std::endl;
  return 0;
}