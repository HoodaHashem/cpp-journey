#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

  // A + B, A - B, A * B and A / B
  // 43,     45,     42,      47

  int num1;
  char op;
  int num2;

  cin >> num1 >> op >> num2;

  if (int(op) == 43) {
    long long res = num1 + num2;
    cout << res;
  } else if (int(op) == 45) {
    cout << num1 - num2;
  } else if (int(op) == 42) {
    long long res = num1 * num2;
    cout << res;
  } else if (int(op) == 47) {
    cout << num1 / num2;
  }

  return 0;
}
