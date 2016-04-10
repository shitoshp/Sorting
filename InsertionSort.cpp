#include <iostream>

using namespace std;


int main() {

  int numExamples = 10;
  int myArray[numExamples];

  for(int a = 0 ; a < 10; a++) {

    cout << a;
    myArray[a]= a;
    cout << myArray[a];
  }

  for(int b = 0 ; b < 10; b++) {

    cout << myArray[b] << " ";
  }

}
