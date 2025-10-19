#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num1, num2, num3, or1, or2, or3;

  cin >> num1 >> num2 >> num3;

  if (num1 >= num2 && num2 >= num3) {
    or1 = num1;
    or2 = num2;
    or3 = num3;
  }
  if (num1 >= num2 && num2 <= num3) {
    or1 = num1;
    or2 = num3;
    or3 = num2;
  }
  if (num2 >= num1 && num1 >= num3) {
    or1 = num2;
    or2 = num1;
    or3 = num3;
  }
  if (num2 >= num1 && num1 <= num3) {
    or1 = num2;
    or2 = num3;
    or3 = num1;
  }
  if (num3 >= num1 && num1 >= num2) {
    or1 = num3;
    or2 = num1;
    or3 = num2;
  }
  if (num3 >= num2 && num1 <= num2) {
    or1 = num3;
    or2 = num2;
    or3 = num1;
  }

  cout << or3 << '\n' << or2 << '\n' << or1 << '\n';
  cout << '\n' << num1 << '\n' << num2 << '\n' << num3 << '\n';

  return 0;
}
