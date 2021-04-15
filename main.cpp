#include <iostream>

// Practica #1 Ejercicio 1 Aréa de un triangulo
int main() {
  float base,altura,área;

   std::cout << "Este programa permite calcular el área de un triangulo. \n";
   std::cout << "Primero digite el valor de la base en metros y luego presione  ENTER:\n";
  std::cin >> base;
   std::cout << "El valor digitado es:\n"<<base;
   std::cout << " m.\n";
   std::cout << "\n Ingrese ahora el valor de la altura en metros y luego presione ENTER:\n";
  std::cin >> altura;
   std::cout << "El valor digitado es:\n"<<altura;
   std::cout << " m.\n";
  área=base*altura/2;
   std::cout << "\n El área es:\n"<<área;
   std::cout << " m^2.\n";
  return 0;
}


