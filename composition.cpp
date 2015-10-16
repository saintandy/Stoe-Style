// "+" : Z -> Z
// A + B = A^2 + 2AB + B^2
#include <bits/stdc++.h>
using namespace std;

class Composition {
  private:
    int value;
  public:
    Composition() {
      value = 0;
    }
    inline int operator + (const Composition b) {
      Composition a = (*this);
      return a.value * a.value +
        2 * a.value * b.value +
        b.value * b.value;
    }
    inline void operator = (const int a) {
      value = a;
    }
};

Composition a, b;

int main() {
  a = 3;
  b = 4;
  cout << a + b;
}
