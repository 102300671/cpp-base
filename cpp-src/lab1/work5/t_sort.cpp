#include <iostream>
#include <utility>
using namespace std;

template <typename T>
T* init(int n) {
  T* array = new T[n];
  for(int i = 0; i < n; i++) {
      cin >> array[i];
  }
  return array;
}

template <typename T>
void csort(T array[], int n) {
  for(int i = 0; i < n - 1; i++) {
    int m = i;
    for(int j = i + 1; j < n; j++) {
      if(array[m] > array[j]) {
        m = j;
      }
    }
    if(m != i) {
      swap(array[m], array[i]);
    }
  }
}

template <typename T>
void print(T array[], int n) {
  for(int i = 0; i < n; i++) {
    cout << array[i] << " ";
  }
}

template <typename T>
void destroy(T array[]) {
  delete [] array;
}

int main() {
  int option;
  cout << "0:整型;1:单精度;其它:双精度" << endl;
  cin >> option;
  int n;
  cout << "个数:";
  cin >> n;
  if(option == 0) {
    int* a = init<int>(n);
    csort(a,n);
    print(a,n);
    destroy(a);
  } else if(option == 1) {
    float* a = init<float>(n);
    csort(a,n);
    print(a,n);
    destroy(a);
  } else {
    double* a = init<double>(n);
    csort(a,n);
    print(a,n);
    destroy(a);
  }
  cout << endl;
  return 0;
}