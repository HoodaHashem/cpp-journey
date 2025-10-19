#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  float input;

  cin >> input;

  
  if (input - int(input) == 0) {
    cout << "int " << int(input);
  } else {
    cout << "float " << int(input) << " " << input - int(input);
  }
}
