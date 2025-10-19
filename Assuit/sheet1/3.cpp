#include <iostream>

using namespace std;

int main() {
  long long num1, num2;

  cin >> num1 >> num2;

  int first = num1 % 10;
  int second = num2 % 10;

  cout << first + second;
}
