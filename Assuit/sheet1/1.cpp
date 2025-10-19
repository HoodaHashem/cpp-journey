#include <iostream>

using namespace std;

int main() {
  long long num1;
  long long num2;
  long long num3;
  long long num4;

  cin >> num1 >> num2 >> num3 >> num4;
  long long first = num1 * num2;
  long long second = num3 * num4;
  cout << "Difference = " << first - second;
}
