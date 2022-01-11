#include <iostream>
 
int main() {
 char letra;
 std::cout << "Pasar una letra de mayúscula a minúscula o viceversa" << std::endl;
 std::cin >> letra;
 while((letra < 'A' || letra > 'Z') && (letra < 'a' || letra > 'z')){  //Este bucle reconce que solo se introduzcan letras
     std::cout << "El valor introducido  no es válido" << std::endl;
     std::cout << "Introduce otro valor: " << std::endl;
     std::cin >> letra;
}
 if (letra >= 'A' && letra <= 'Z') {  //Analiza si la letra es mayúscula y la cambia
   letra += 32;
 } 
 else if (letra >= 'a' && letra <= 'z') {  //Analiza que la letra es minúscula y la cambia
   letra -= 32;
 }
 std::cout << "la letra es: " << letra << std::endl;
 return 0;
}
