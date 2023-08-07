#include <iostream>
using namespace std;

int main() {
  int times, a, b, c, add1, add2, add3;
  add1 = 0;
  add2 = 0;
  add3 = 0;
  cin >> times;
  while (times--) {
    cin >> a;
    cin >> b;
    cin >> c;
    add1 = add1 + a;
    add2 = add2 + b;
    add3 = add3 + c;
  }
  if (add1 == 0 && add2 == 0 && add3 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}