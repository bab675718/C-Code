#include <iostream>
using namespace std;

int main() {
  int m = 3, n = 3;

  int arr1[m][n];
  int arr2[m][n];
  int arr3[m][n];

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

  return 0;
}
