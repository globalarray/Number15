#include<iostream>

using namespace std;

int main() {
  int countNumbers, sumNumbers, number = 0;

  cin >> countNumbers;

  for(int i = 0; i < countNumbers; i++) {
    cin >> number;
    if (!(number % 6)) sumNumbers += number;
  }

  cout << sumNumbers << endl;
}
