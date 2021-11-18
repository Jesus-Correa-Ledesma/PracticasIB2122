/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sum-digits.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa calcula la suma de los dígitos de un número dados por el usuario
  * @see 
  */
#include <iostream>
 
int Calculos(int numero, int resultado) { //Declaramos la variable Calculos para que separe y sume los dígitos del número
 while ( numero > 0 ) { //Con este bucle se separan los dígitos y se suman dando lugar a resultado
 resultado = resultado + (numero % 10);
 numero = numero / 10;
 } return resultado;
}
 
int main(int argc, char *argv[]) { // Le pedimos el número al usuario y mostramos por pantalla el resultado
 int numero, resultado{0};
 std::cout << "Dime un número para poder sumar sus dígitos: ";
 std::cin >> numero;
 std::cout << "La suma de los dígitos " << numero << " es: " << Calculos( numero, resultado ) << std::endl;
 return 0;
}
