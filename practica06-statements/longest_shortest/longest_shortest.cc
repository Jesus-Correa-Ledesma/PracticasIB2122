/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Introducir un número de palabras y ver cual de todas es la más larga y cual la más corta
 */
#include <iostream>
#include <string>
#include <vector>

int numero_palabras; //Declaramos los strings que van a ocupar la palabra más larga y la más corta.
std::vector<std::string> palabras ;
std::string palabra_escrita;
std::string palabra_larga;
std::string palabra_corta = "abcdefghijklmnopqrstuvwxyz";

int main() { //Solicitamos al usuario las palabras que desea introducir
  std::cout << "\nNecesitaremos saber el número de palabras que vas a escribir para saber cual es la más larga y la mas corta\n" << std::endl;
  std::cout << "Introduce en número de palabras que vas a escribir: ";
  std::cin >> numero_palabras;
  palabras.reserve (numero_palabras); //Reservamos un espacio para guardar las palabras introducidas
    for(int i = 0 ; i < numero_palabras ; ++i) { 
      std::cout << "Palabra " << i+1 << ": ";
      std::cin >> palabra_escrita;
      palabras[i] = palabra_escrita;
      if(palabras[i].length() > palabra_larga.length()) { // Si la palabra i es mayor que la palabra larga guardada esta le sustituye
        palabra_larga = palabras[i];}
      if(palabras[i].length() < palabra_corta.length()) { // Si la palabra i es menor que la palabra corta guardada entonces le sustituye
        palabra_corta = palabras[i];}
    }
  std::cout << "La palabra más larga es: " << palabra_larga << std::endl;
  std::cout << "La palabra más corta es: " << palabra_corta << std::endl;
  return 0;
}