#include <iostream>
using namespace std;

void matrix_addition(int **arr1, int **arr2, int m, int n) {
  int *arr3[m];

  for (int i = 0; i < m; i++) {
    arr3[i] = new int[n];
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }
  return;
}
int main() {
  int m = 3, n = 3;

  int **arr1;
  int **arr2;

  arr1 = new int *[m];
  arr2 = new int *[m];

  for (int i = 0; i < m; i++) {
    arr1[i] = new int[n];
  }

  for (int i = 0; i < m; i++) {
    arr2[i] = new int[n];
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr1[i][j];
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr2[i][j];
    }
  }

  matrix_addition(arr1, arr2, m, n);

  return 0;
}
