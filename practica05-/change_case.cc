#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main() {
    char letra;
        printf("Ingresar una letra:\n");
        scanf("%c", &letra);
        letra = toupper(letra);
        printf("El cambio es: %c\n", letra);
        letra = tolower(letra);
        printf("El cambio es: %c\n", letra);
    return 0;
}

//g++ -std=c++14 -Wall -o change_case change_case.cc