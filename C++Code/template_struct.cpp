#include <iostream>
using namespace std;

template <typename T>

struct Pair {
  T x, y;

  Pair(T i, T j) {
    x = i;
    y = j;
  }
  T getfirst() { return x; }
  T getsecond() { return y; }
};

int main() {
  Pair<int> p1(20, 30);
  cout << p1.getfirst();
  cout << p1.getsecond();
}
