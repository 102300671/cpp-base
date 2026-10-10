#include <iostream>
using namespace std;

void swap_if_greater(int* left, int* right) {
  if (*left > *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
  }
}
void swap_if_greater(int& left, int& right) {
  if (left > right) {
    int temp = left;
    left = right;
    right = temp;
  }
}
int main() {
  int first, second, third;
  cin >> first >> second >> third;
  int option;
  cout << "请选择方法（1: 指针，其他: 引用）：";
  cin >> option;
  if (option == 1) {
    swap_if_greater(&first, &second);
    swap_if_greater(&second, &third);
    swap_if_greater(&first, &second);
  } else {
    swap_if_greater(first, second);
    swap_if_greater(second, third);
    swap_if_greater(first, second);
  }
  cout << first << " " << second << " " << third << endl;
  return 0;
}