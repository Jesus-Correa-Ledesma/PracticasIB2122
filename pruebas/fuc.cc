/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Edgar Joel Martín Melián
 * @date 7 Dec 2021
 * @brief This file define the two functions
 *
 */

#include "functions.h"

#include <cstdlib>
#include <fstream>
#include <iostream>

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa el nombre del fichero de texto para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char* argv[]) {
  const std::string kHelp{"--help"};
  if (argc == 1) {
    std::cerr << argv[0] << " -- Palabra con más vocales/consonantes \n\
    Modo de uso: " << argv[0] << " file.txt \n\
    Pruebe: " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_FAILURE);
  }
  std::string parameter{argv[1]};
  if (argc == 2 && parameter == kHelp) {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
  if ((argc < 2 || argc > 2) && (parameter != kHelp)) {
    std::cerr << argv[0] << " -- Palabra con más vocales/consonantes \n\
    Modo de uso: " << argv[0] << " file.txt \n\
    Pruebe: " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_FAILURE);
  }
}

/**
 * Analiza palabra por palabra contando las vocales y consonantes de un
 * ficher de texto y las va comprobando con la palabra con más vocales y la
 * palabra con más consonantes que hay en ese momento. En caso de que la palabra
 * que se está leyendo contiene más vocales o consonantes se convierte en la
 * palabra con más consonantes/vocales.
 * Al finalizar de analizar imprime por pantalla las palabras que contiene más
 * cantidad de vocales y consonantes.
 * 
 * @param[in] input_file File to read
 */
void Search(std::ifstream& input_file) {
  std::string vocals_word;
  int vocals_word_cuantity{0};
  std::string consonants_word;
  int consonants_word_cuantity{0};
  std::string actual_word;
  const std::string kVocals{"aeiouAEIOU"};
  const std::string kConsonants{"bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"};
  while (input_file >> actual_word) {
    int counter_vocals{0};
    int counter_consonants{0};
    for (size_t i{0}; i < actual_word.size(); ++i) {
      for (size_t j{0}; j < kVocals.size(); ++j) {
        if (actual_word[i] == kVocals[j]) {
          ++counter_vocals;
          break;
        }
      }
      for (size_t j{0}; j < kConsonants.size(); ++j) {
        if (actual_word[i] == kConsonants[j]) {
          ++counter_consonants;
          break;
        }
      }
    }
    if (counter_vocals > vocals_word_cuantity) {
      vocals_word = actual_word;
      vocals_word_cuantity = counter_vocals;
    } 
    if (counter_consonants > consonants_word_cuantity) {
      consonants_word = actual_word;
      consonants_word_cuantity = counter_consonants;
    }
  }
  std::cout << "La palabra con más vocales es: " << vocals_word << std::endl;
  std::cout << "La palabra con más consonantes es: " << consonants_word
            << std::endl;
}