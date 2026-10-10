#include <iostream>
using namespace std;

int max_overload(int a, int b) { return a > b ? a : b; }
int max_overload(int a, int b, int c) {
  int m = a > b ? a : b;
  return m > c ? m : c;
}
int max_default(int a, int b, int c = 0) {
  int m = a > b ? a : b;
  return m > c ? m : c;
}

int main() {
  int a, b;
  int choice, option;
  cout << "输入 choice(2或3) option(0=带默认参版本，非0=重载版本): " << endl;
  cin >> choice >> option;
  if (choice == 2) {
    cin >> a >> b;
    cout << (option ? max_overload(a, b) : max_default(a, b)) << endl;
  } else if (choice == 3) {
    int c;
    cin >> a >> b >> c;
    cout << (option ? max_overload(a, b, c) : max_default(a, b, c)) << endl;
  } else {
    cout << "两个数或者三个数" << endl;
  }
  return 0;
}