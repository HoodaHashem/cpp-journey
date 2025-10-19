#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num1, num2;
  long long res;
  char op, eq;

  cin >> num1 >> op >> num2 >> eq >> res;

  if (int(op) == 42) {
    long long lol = num1 * num2;
    if (lol == res) {
      cout << "Yes";
    } else {
      cout << lol;
    }
  }
  if (int(op) == 43) {
    long long lol = num1 + num2;
    if (lol == res) {
      cout << "Yes";
    } else {
      cout << lol;
    }
  }
  if (int(op) == 45) {
    long long lol = num1 - num2;
    if (lol == res) {
      cout << "Yes";
    } else {
      cout << lol;
    }
  }

  return 0;
}
