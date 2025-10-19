#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num1, num2;

  cin >> num1 >> num2;

  if (num1 % num2 == 0) {
    cout << "Multiples";
  } else if (num2 % num1 == 0) {
    cout << "Multiples";
  } else {
    cout << "No Multiples";
  }

  return 0;
}
