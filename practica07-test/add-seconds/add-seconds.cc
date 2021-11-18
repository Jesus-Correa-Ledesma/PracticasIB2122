/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add-seconds.cc
  * @author Jesús Adrián Correa Ledesma alu0101403595@ull.edu.es
  * @date Nov 15 2021
  * @brief Este programa separa las horas minutos y segundos y los muestra por pantalla
  * @see 
  */
#include <iostream>

void AddSecond(int hours, int minutes, int seconds) { //Creamos la función  para las horas minutos y segundos
  const int kSixty{60};
  const int kTwentyfour{24};
  ++seconds;
  if (seconds == kSixty) { //Si los segundos son igual a 60 se añade 1 min
    seconds = 0;
    ++minutes;
    if (minutes == kSixty) { //Si los minutos son igual a 60 se añade 1 hora
      minutes = 0;
      ++hours;
      if (hours == kTwentyfour) { 
        hours = 0;
      }
    }
  }
  int time_array[3] = {hours, minutes, seconds};
  for (int i{0}; i < 3; ++i) { //Con este for se hace el contador y se ordenan los parámetros
    if (time_array[i] < 10 && i < 2) {
      std::cout << "0" << time_array[i] << ":";
    } else if (time_array[i] < 10 && i == 2) {
      std::cout << "0" << time_array[i];
    } else if (i < 2) {
      std::cout << time_array[i] << ":";
    } else {
      std::cout << time_array[i];
    }
  }
  std::cout << "\n";
}

void AddSecond(int hours, int minutes, int seconds);

int main() { //Pide al usuario los parámetros y efectua la función AddSecond
  int hours;
  int minutes;
  int seconds;
  std::cout << "Introduce las horas: ";
  std::cin >> hours;
  std::cout << "Introduce los minutos: ";
  std::cin >> minutes;
   std::cout << "Introduce los segundos: ";
  std::cin >> seconds;
  AddSecond(hours, minutes, seconds);
  return 0;
}

