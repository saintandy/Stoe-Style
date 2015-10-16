#include <bits/stdc++.h>
using namespace std;

class my_vector : public vector<int> {
  public:
    int StoE(int i) {
      return (*this).at(i) + (*this).at(i - 1);
    }
};

my_vector v;

int main() {
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  cout << v.StoE(3); 
}
