#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int mn, mx;

  if (A <= B && A <= C)
    mn = A;
  else if (B <= A && B <= C)
    mn = B;
  else
    mn = C;

  if (A >= B && A >= C)
    mx = A;
  else if (B >= A && B >= C)
    mx = B;
  else
    mx = C;

  cout << mn << " " << mx << endl;

  return 0;
}
