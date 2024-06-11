#include <bits/stdc++.h>
using namespace std;

void transpose(int **arr, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return;
}
int main() {
  int m = 2, n = 2;

  int **arr;

  arr = new int *[m];
  for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  transpose(arr, m, n);

  return 0;
}
