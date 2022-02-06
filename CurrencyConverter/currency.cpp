#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;

  double dollars;

  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;

  dollars = (0.00025*pesos)+(0.19*reais)+(0.26*soles);

  std::cout << "US Dollars = $" << dollars;
  
  
}