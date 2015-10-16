#include <bits/stdc++.h>
using namespace std;

template <typename my_type>
class my_vector_class {
  private:
    my_type a[1000];
    int len = 0;
  public:
    void push_back(const my_type b) {
      a[len++] = b;
    }
    my_type at(const int p) {
      return a[p];
    }
    my_type operator [] (const my_type p) {
      return a[p];
    }
};

vector<int> my_vector;
my_vector_class<int> my_new_vector;

int main() {
  my_vector.push_back(1);
  cout << my_vector.at(0) << '\n';
  my_new_vector.push_back(2);
  cout << my_new_vector[0] << '\n';
}
