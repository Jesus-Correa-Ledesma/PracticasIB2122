/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Suma de los 3 últimos dígitos
 */
#include <iostream>
 
int main() {
 int num, i{0}, a{1};
 std::cout << "Vamos a hacer la suma de los tres dígitos de un número natural" << std::endl;
   std::cin >> num;
 while ( num > 0 && a <= 3 && ++a ) {
   i = i + (num % 10);
   num = num / 10;}
 std::cout << "La suma es: " << i << std::endl;
 return 0;
}
