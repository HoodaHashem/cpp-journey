#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  char ch;

  cin >> ch;

  int num = int(ch);

  if (num >= 65 && num <= 90) {
    num = num + 32;
  } else if (num >= 97 && num <= 122) {
    num = num - 32;
  }

  cout << char(num);

  return 0;
}
