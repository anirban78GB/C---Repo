// write a program to add 2  vector (Arrays)
#include <iostream>
using namespace std;

int main() {
  int a[3] = {1, 2, 3};
  int b[3] = {4, 5, 6};
  int c[3];
  for (int i = 0; i < 3; i++) {
    c[i] = a[i] + b[i];
  }
  for (int i = 0; i < 3; i++) {
    cout << c[i] << " ";
  }
  return 0;
}