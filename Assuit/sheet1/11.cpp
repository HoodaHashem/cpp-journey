#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  char ch;

  cin >> ch;
  if (int(ch) >= 65 && int(ch) <= 90) {
    cout << "ALPHA\n" << "IS CAPITAL";
  } else if (int(ch) >= 97 && int(ch) <= 122) {
    cout << "ALPHA\n" << "IS SMALL";
  } else {
    cout << "IS DIGIT";
  }
  return 0;
}
