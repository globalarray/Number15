#include <iostream>

using namespace std;

int main() {
  int countAllNumbers, number, minPassNumber = 0;

  cin >> countAllNumbers;

  for (int i = 0; i < countAllNumbers; i++) {
    cin >> number;

    if ((number % 10) == 6) {
      if (minPassNumber > number || minPassNumber == 0 && number < 30000) {
        minPassNumber = number;
      }
    }
  }

  cout << minPassNumber << endl;
  return 0;
}