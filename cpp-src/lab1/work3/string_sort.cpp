#include <iostream>
#include <string>
using namespace std;

void csort(string* arry[5]) {
  for(int i = 0; i < 5; i++) {
    int m = i;
    for(int j = i + 1; j < 5; j++) {
      if(arry[m]->compare(*arry[j]) > 0) {
        m = j;
      }
    }
    if(m != i) {
      swap(arry[i], arry[m]);
    }
  }
}

int main() {
  string *arry[5];
  for(int i = 0; i < 5; i++) {
    arry[i] = new string;
    cin >> *arry[i];
  }
  csort(arry);
  for(int i = 0; i < 5; i++) {
    cout << *arry[i] << endl;
    delete arry[i];
    arry[i] = nullptr;
  }
  return 0;
}