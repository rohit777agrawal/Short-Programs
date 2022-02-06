#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  double a;
  double b;
  double c;

  cout << "Enter a:\n";
  cin >> a;

  cout << "Enter b:\n";
  cin >> b;

  cout << "Enter c:\n";
  cin >> c;

  double root1;
  double root2=2;

  root1 = (-b + (sqrt(b*b - 4*a*c)))/(2*a);
  root2 = (-b - (sqrt(b*b - 4*a*c)))/(2*a);

  cout << root1 << "\n";
  cout << root2 << "\n";
}