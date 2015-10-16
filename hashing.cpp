#include <bits/stdc++.h>
using namespace std;

class Hash {
  private:
    static const int Mod = 666013;
    vector<int> h[Mod];
  public:
    inline void insert(const int a) {
      int line = a % Mod;
      for (const auto i : h[line]) {
        if (i == a) {
          return ;
        }
      }
      h[line].push_back(a);
    }
    inline bool query(const int a) {
      int line = a % Mod;
      for (const auto i : h[line]) {
        if (i == a) {
          return true;
        }
      }
      return false;
    }
};

Hash my_hash;
int n, m;

int main() {
  cout << "Enter the number of numbers: ";
  cin >> n;
  cout << "Now enter the " << n << " numbers: ";
  for (int i = 1, x; i <= n; ++i) {
    cin >> x;
    my_hash.insert(x);
  }
  cout << "Enter the number of querys: ";
  cin >> m;
  for (int i = 1, x; i <= m; ++i) {
    cout << "Enter the " << i << " th query: ";
    cin >> x;
    cout << (my_hash.query(x) == 1 ? "True" : "False") << '\n';
  }
}
