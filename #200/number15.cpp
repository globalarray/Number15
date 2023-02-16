#include <iostream>

using namespace std;

int main() {
  int countAllNumbers, number, maxPassNumber = 0;

  cin >> countAllNumbers;

  for (int i = 0; i < countAllNumbers; i++) {
    cin >> number;
    string strNumber = to_string(number);
    if ((strNumber[strNumber.length() - 1] - '0') == 3) {
      if (number > maxPassNumber) {
        maxPassNumber = number;
        }
      }
  }

  cout << maxPassNumber << endl;
}
