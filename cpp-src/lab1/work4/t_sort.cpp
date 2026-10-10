#include <iostream>
#include <utility>
using namespace std;

void csort(int array[], int n) {
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

void csort(float array[], int n) {
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

void csort(double array[], int n) {
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

int main() {
  int option;
  cout << "0:整型;1:单精度;其它:双精度" << endl;
  cin >> option;
  int n;
  cout << "个数:";
  cin >> n;
  if(option == 0) {
    int* array = new int[n];
    for(int i = 0; i < n; i++) {
      cin >> array[i];
    }
    csort(array, n);
    for(int i = 0; i < n; i++) {
      cout << array[i] << " ";
    }
    delete [] array;
  } else if (option == 1) {
    float* array = new float[n];
    for(int i = 0; i < n; i++) {
      cin >> array[i];
    }
    csort(array, n);
    for(int i = 0; i < n; i++) {
      cout << array[i] << " ";
    }
    delete [] array;
  } else {
    double* array = new double[n];
    for(int i = 0; i < n; i++) {
      cin >> array[i];
    }
    csort(array, n);
    for(int i = 0; i < n; i++) {
      cout << array[i] << " ";
    }
    delete [] array;
  }
  cout << endl;
  return 0;
}