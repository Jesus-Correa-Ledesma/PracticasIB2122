/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 * @date 7 Dec 2021
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>

const std::string kHelpText =
    "./vocals_and_consonants -- Palabra con más vocales/consonantes\n\
Este programa imprime por pantalla la palabra con mayor número de vocales y la \
palabra con el mayor número de consonantes (independientemente de si se trata \
de mayúsculas o minúsculas) que se encuentren en el fichero de texto que se le \
pase como parámetro. \n\
Modo de uso: ./vocals_and_consonants file.txt \n\
  file.txt ==> Fichero de texto donde se alojan las palabras a analizar.";

void Usage(int argc, char *argv[]);
void Search(std::ifstream& input_file);
