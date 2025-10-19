#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  string firstName, secondName, thirdName, fourthName;

  cin >> firstName >> secondName >> thirdName >> fourthName;

  if (secondName == fourthName) {
    cout << "ARE Brothers";
  } else {
    cout << "NOT";
  }

  return 0;
}
