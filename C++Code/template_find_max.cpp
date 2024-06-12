#include <iostream>
using namespace std;

template <typename T> T arrmax(T arr[], int n) {
  T res = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > res) {
      res = arr[i];
    }
  }
  return res;
}

int main() {
  int arr1[] = {10, 39, 49, 50};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  cout << arrmax<int>(arr1, n);
}
