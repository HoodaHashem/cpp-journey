#include <iostream>

using namespace std;

int main() {
  long long input;

  cin >> input;
  long long buf = input + 1;
  long long sum = input * buf;
  cout << sum / 2;
}
