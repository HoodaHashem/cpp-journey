#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  // ('<', '>','=')
  // (60, 62, 61)

  int num1, num2;
  char op;

  cin >> num1 >> op >> num2;

  if (int(op) == 60 && num1 < num2) {
    cout << "Right";
  } else if (int(op) == 62 && num1 > num2) {
    cout << "Right";
  } else if (int(op) == 61 && num1 == num2) {
    cout << "Right";
  } else {
    cout << "Wrong";
  }
  return 0;
}
