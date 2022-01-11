/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Edgar Joel Martín Melián alu0101434698@ull.edu.es
  * @date 07 Dic 2021
  * @brief El programa imprime en pantalla la palabra con mayor número de 
  *        vocales y la palabra con el mayor número de consonantes 
  *        (independientemente de si se trata de mayúsculas o minúsculas) que se
  *        encuentren en el fichero de texto que se le pase como parámetro.
  * @bug No hay bugs conocidos
  */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

#include "functions.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string kInputFilename{argv[1]};
  std::ifstream input_file(kInputFilename, std::fstream::in);
  if (input_file.fail()) {
    std::cerr << "Error: el archivo no se pudo abrir! \n\
    Revise de todo e intentelo de nuevo!\n\
    Pruebe: " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_FAILURE);
  } else {
    Search(input_file);
  }
  input_file.close();

  return 0;
}