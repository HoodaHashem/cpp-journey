#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double pi = 3.141592653;

  float input;

  cin >> input;

  double result = pi * input * input;

  cout << fixed << setprecision(9);
  cout << result;
}
