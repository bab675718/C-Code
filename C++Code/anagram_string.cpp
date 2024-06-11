#include <iostream>
#include <string>
using namespace std;

bool anagram(string &s1, string &s2) {
  int n1 = s1.length(), n2 = s2.length();

  int count[256] = {0};

  for (int i = 0; i < n1; i++) {
    count[s1[i]] = count[s1[i]] + 1;
  }
  for (int i = 0; i < n2; i++) {
    count[s2[i]] = count[s2[i]] - 1;
  }
  for (int i = 0; i < 256; i++) {
    if (count[i] != 0) {
      return false;
    }
  }
  return true;
}
int main() {
  string s1 = "silent", s2 = "lasten";
  cout << anagram(s1, s2);
  return 0;
}
