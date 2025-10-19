#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  int yrs = num / 365;
  num = num % 365;

  int mons = num / 30;
  num = num % 30;

  int days = num;

  cout << yrs << " years\n";
  cout << mons << " months\n";
  cout << days << " days\n";

  return 0;
}
