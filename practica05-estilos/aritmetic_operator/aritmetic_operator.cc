#include <iostream>
 
int main() {
  int num_a{9};
  int num_b{4};
  std::cout << "Vamos a ver los operadores aritméticos." << std::endl;
  std::cout << "El resultado de operar " << num_a << " + " << num_b << " es: " << num_a + num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " - " << num_b << " es: " << num_a - num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " * " << num_b << " es: " << num_a * num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " / " << num_b << " es: " << num_a / num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " % " << num_b << " es: " << num_a % num_b << std::endl;
  std::cout << std::endl;
  std::cout << "Ahora los comparadores" << std::endl;
  std::cout << "El resultado de operar " << num_a << " == " << num_b << " es: " << (num_a == num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " > " << num_b << " es: " << (num_a > num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " < " << num_b << " es: " << (num_a < num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " >= " << num_b << " es: " << (num_a >= num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " <= " << num_b << " es: " << (num_a <= num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " & " << num_b << " es: " << (num_a & num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " | " << num_b << " es: " << (num_a | num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " << " << num_b << " es: " << (num_a << num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " >> " << num_b << " es: " << (num_a >> num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " ^ " << num_b << " es: " << (num_a ^ num_b) << std::endl;
  return 0;
}
