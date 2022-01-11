/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * Autor Jesús Adrián Correa Ledesma
 * Medir la temperatura en celcius y decir la sensación (frío / calor) que hay
 */
#include <iostream>

int main() {
  int temp;
  std::cout << "Vamos a ver que tipo de temperatura hace" << std::endl;
  std::cout << "Dime la temperatura en grados celcius: ";
  std::cin >> temp;
  if (temp >= 100) { // Intervalo en el que hace mucho calor
    std::cout << "Hace muchísimo calor, en este punto el agua hierve" << std::endl;}
  if ((temp >= 10) && (temp <=30)) { // Intervalo en el que la temperatura es adecuada
    std::cout << "La temperatura es correcta" << std::endl;}
  if (temp <= 10) { // Intervalo en el que hace frío
    std::cout << "Hace bastante frío" << std::endl;}
  if (temp <= 0) { // Intervalo donde se congela el agua
    std::cout << "El agua en este punto se congela" << std::endl;}
  return 0;
  }