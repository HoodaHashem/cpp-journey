#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num, firstNum;

  cin >> num;

  firstNum = num / 1000;

  if (firstNum % 2 == 0) {
    cout << "EVEN";
  } else {
    cout << "ODD";
  }

  return 0;
}
