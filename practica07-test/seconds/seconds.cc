/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file seconds.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa convierte los años, días, horas, minutos y segundos dados por un usuario a segundos
  * @see 
  */
#include <iostream>
 
int Conversion( int years, int days, int hours, int minutes, int seconds) { //Declaramos y creamos la variable de conversión
 days = days + (years * 365); //Convertimos los días a segundos
 hours = hours + (days * 24); //Convertimos las horas a segundos
 minutes = minutes + (hours * 60); //Convertimos los minutos a segundos
 seconds = seconds + (minutes * 60);
 return seconds;
}
int main() {
 int years, days, hours, minutes, seconds;
 std::cout << "Dime los años: ";
 std::cin >> years;
 std::cout << "Dime los días: ";
 std::cin >> days;
 std::cout << "Dime las horas: ";
 std::cin >> hours;
 std::cout << "Dime los minutos: ";
 std::cin >> minutes;
 std::cout << "Dime los segundos: ";
 std::cin >> seconds;
 std::cout << "El resultado es: " << Conversion( years, days, hours, minutes, seconds) << std::endl; //Con la función de conversión hacemos los cálculos y los mostramos en pantalla
 return 0;
}
