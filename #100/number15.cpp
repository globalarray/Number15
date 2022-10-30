#include <iostream>

using namespace std;

int main() {
	int numbersSummary = 0;
	int numbersCount, inputNumber;

	cin >> numbersCount;

	for (int i = 0; i < numbersCount; i++) {
		cin >> inputNumber;

		if (!(inputNumber % 3) && inputNumber < 300) {
			numbersSummary += inputNumber;
		}
	}
	cout << numbersSummary << endl;
}